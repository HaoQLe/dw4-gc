// fn_802CF6E0: the deleting destructor of beMessengerArgData. Written by tools/alchemymeta/dtorsrc.py.
#include <meta/register.h>

META_DECLARE(beMessengerArgData)
extern "C" {
void fn_80066DFC(void *object);   // frees an object
}

struct beMessengerArgDataObject {
    void *__vtable;
    char unknown04[8];
    igStringMember _debugString;
    igObjectRefMember _boolList;
    igObjectRefMember _intList;
    igObjectRefMember _floatList;
    igObjectRefMember _longList;
    igObjectRefMember _vec3fList;
    igObjectRefMember _matrix44fList;
    igObjectRefMember _objectList;
    igObjectRefMember _stringList;
};

extern "C" beMessengerArgDataObject *fn_802CF6E0(beMessengerArgDataObject *self, short flags)
{
    if (self) {
        self->__vtable = beMessengerArgData_vtable;
        self->_stringList.~igObjectRefMember();
        self->_objectList.~igObjectRefMember();
        self->_matrix44fList.~igObjectRefMember();
        self->_vec3fList.~igObjectRefMember();
        self->_longList.~igObjectRefMember();
        self->_floatList.~igObjectRefMember();
        self->_intList.~igObjectRefMember();
        self->_boolList.~igObjectRefMember();
        self->_debugString.~igStringMember();
        if (flags > 0) fn_80066DFC(self);
    }
    return self;
}
