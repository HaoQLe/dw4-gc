// igIterateObject: Alchemy class registration (0x80143CE4..0x80143FCC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igIterateObject)
META_DECLARE(igIterator)

extern "C" {
void fn_8012FC48();
void *fn_80143FCC();
extern char igIterateObject_dependencies[24];
extern char lbl_804A9C44[];
}

struct igIterateObjectInstance : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _itemInterface;
    igStringMember _traversalName;
    char unknown10[4];
    igObjectRefMember _currentPath;
    igObjectRefMember _currentIndices;
    igObjectRefMember _cachedChildList;
    igObjectRefMember _traversedObject;
    char unknown24[12];
    inline ~igIterateObjectInstance() { __vtable = igIterateObject_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igIterateObject)

META_GET_META(igIterateObject)

void *igIterateObject_vtableRead()
{
    igIterateObjectInstance object;
    object.__vtable = lbl_804A9C44;
    object.__vtable = igIterateObject_vtable;
    object._itemInterface._value = 0;
    object._traversalName._value = 0;
    object._currentPath._value = 0;
    object._currentIndices._value = 0;
    object._cachedChildList._value = 0;
    object._traversedObject._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igIterateObject)

void igIterateObject_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igIterateObject_meta, igIterator_register,
                       fn_80143FCC, igIterateObject_getMetaCall,
                       igIterateObject_className, 0x24,
                       igIterateObject_vtableRead, igIterateObject_fieldInit, 0, igIterateObject_dependencies);
}

META_GET_META_CALL(igIterateObject)

}
#pragma pop
