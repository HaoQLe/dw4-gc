// igGamecubeVisualContext: adding a custom state collection (0x800D9778..0x800D9CA4).
// NonMatching (99.3%): the instructions match except register colouring (the first search's index is kept
// in r7 and copied to the result; the result is copied to r27 before the destructors run) and the stack
// slots of the field-name reference and the first search's null pointer, which are swapped.
#include "igGamecubeVisualContextNames.h"
#include <game/Virtual.h>
#include <meta/igCustomStateCollection.h>
#include <meta/igCustomStateCollectionList.h>
#include <meta/igCustomStateFieldList.h>
#include <meta/igCustomStateField.h>
#include <meta/igMetaField.h>
#include <meta/igStringObj.h>

extern "C" {
char *strstr(const char *string, const char *find);
unsigned long strlen(const char *string);
void *fn_80068430(GcVisualContext *self);   // the memory pool of an object
Meta::igCustomStateCollection *igCustomStateCollection_create(void *pool);
Meta::igCustomStateField *igCustomStateField_create(void *pool);
Meta::igStringObj *igStringObj_create(void *pool);
void fn_80069128(void *list, void *object);                                         // appends (adds a reference)
void fn_80071F9C(Meta::igStringObj *string, const char *text);                      // sets the text
void fn_80072038(Meta::igStringObj *string, const char *text, int at, int length);  // inserts text
void fn_80066490(Meta::igObject *named, const char *name);                          // sets an igNamedObject's name
int meta_fieldCount(Meta::igMetaObject *meta);
Meta::igMetaField *meta_field(Meta::igMetaObject *meta, int index);
extern Meta::igMetaObject *igVec4fMetaField_meta;
extern Meta::igMetaObject *igMatrix44fMetaField_meta;
extern const char lbl_8055EE38[7];   // "light."
extern const char *lbl_8055DC4C;    // the text of an empty string object
extern void *lbl_80562140;          // the string pool container, created on first use
void *fn_80054140(unsigned int size);
void *fn_80053F28(void *container);
const char *fn_80054094(void *container, const char *text);
}

// A counted reference the holder takes over from a create function, released when it goes out of scope.
template <class T> struct GcOwned {
    T *object;
    inline GcOwned(T *o) : object(o) {}
    inline ~GcOwned() { if (object) release(object); }
};

// Assigns a pooled copy of text to a string member, releasing the old one.
static inline void setString(const char *&member, const char *text)
{
    if (!lbl_80562140) {
        void *container = fn_80054140(0x10);
        if (container) container = fn_80053F28(container);
        lbl_80562140 = container;
    }
    const char *value = fn_80054094(lbl_80562140, text);
    if (member) reinterpret_cast<const Gap::Core::igStringPoolItem *>(member - 8)->release();
    member = value;
}

// An object pointer passed by reference to the list search.
struct GcObjectPtr {
    Meta::igObject *object;
    inline GcObjectPtr(Meta::igObject *o) : object(o) { if (o) addRef(o); }
};

// An object list's search: the index of the first element equal to value, or -1.
struct GcObjectList : Meta::igDataList {
    inline int find(const GcObjectPtr &value)
    {
        for (int i = 0; i < _count; i++) {
            if (value.object == static_cast<Meta::igObject **>(_data)[i]) return i;
        }
        return -1;
    }
    // Replaces element index with a counted reference, releasing the old one.
    inline void set(int index, Meta::igObject *object)
    {
        if (object) addRef(object);
        Meta::igObject *old = static_cast<Meta::igObject **>(_data)[index];
        if (old) release(old);
        if (_count != 0 && index >= 0 && index < _count) static_cast<Meta::igObject **>(_data)[index] = object;
    }
};
static inline GcObjectList *objectList(void *list) { return static_cast<GcObjectList *>(list); }


// Appends text to a string object.
static inline void append(Meta::igStringObj *string, const Gap::Core::igStringRef &ref)
{
    const char *text = ref.getString();
    int at = string->_length;
    fn_80072038(string, text, at, strlen(text));
}

// Whether an object's class is meta (the metaobject is read before the object's).
static inline bool isA(Meta::igObject *object, Meta::igMetaObject *meta) { return meta == metaOf(object); }

// Names an object after a string object's text (or the empty text).
static inline void setName(Meta::igObject *named, Meta::igStringObj *string)
{
    const char *result = static_cast<const char *>(string->_buffer);
    if (!result) result = lbl_8055DC4C;
    fn_80066490(named, result);
}
extern "C" {
// Adds a custom state collection named name holding objects[0..count), in the first free slot of the 0x130
// list, and a custom field "name.field" for each vector or matrix field of the objects' class. Returns the
// collection's index.
int igGamecubeVisualContext_virtual428(GcVisualContext *self, Meta::igObject **objects, unsigned int count,
                                       const char *name)
{
    Gap::Core::igStringRef stateName = fn_800D965C(name);
    GcOwned<Meta::igCustomStateCollection> collection(igCustomStateCollection_create(fn_80068430(self)));
    setString(collection.object->_name, stateName.getString());
    const char *nameText = stateName.getString();
    if (strstr(nameText, lbl_8055EE38) == nameText) collection.object->_flags = 1;
    for (unsigned int i = 0; i < count; i++) fn_80069128(collection.object, objects[i]);

    int index;
    int slot = objectList(self->_customStates)->find(GcObjectPtr(0));
    if (slot < 0) {
        index = reinterpret_cast<Meta::igDataList *>(self->_customStates)->_count;
        fn_80069128(self->_customStates, collection.object);
    } else {
        index = slot;
        objectList(self->_customStates)->set(index, collection.object);
    }

    for (int i = 0; i < meta_fieldCount(metaOf(objects[0])); i++) {
        Meta::igMetaField *field = meta_field(metaOf(objects[0]), i);
        if (!isA(field, igVec4fMetaField_meta) && !isA(field, igMatrix44fMetaField_meta)) continue;
        Meta::igCustomStateField *customField = igCustomStateField_create(fn_80068430(self));
        GcOwned<Meta::igCustomStateField> customFieldRef(customField);
        customField->_stateCollectionHandle = index;
        if (field) addRef(field);
        if (customField->_stateField) release(customField->_stateField);
        customField->_stateField = field;
        GcOwned<Meta::igStringObj> fullName(igStringObj_create(fn_80068430(self)));
        fn_80071F9C(fullName.object, stateName.getString());
        char dot = '.';
        fn_80072038(fullName.object, &dot, fullName.object->_length, 1);
        append(fullName.object, fn_800D965C(field->_fieldName));
        setName(customFieldRef.object, fullName.object);
        int fieldSlot = objectList(self->_customFields)->find(GcObjectPtr(0));
        if (fieldSlot < 0) fn_80069128(self->_customFields, customFieldRef.object);
        else objectList(self->_customFields)->set(fieldSlot, customFieldRef.object);
    }
    return index;
}
}
