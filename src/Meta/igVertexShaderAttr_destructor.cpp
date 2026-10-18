// fn_800AC6A0: the deleting destructor of igVertexShaderAttr. Written by tools/alchemymeta/dtorsrc.py.
#include <meta/register.h>

META_DECLARE(igVertexShaderAttr)
extern "C" {
void fn_80066DFC(void *object);   // frees an object
}

struct igVertexShaderAttrObject {
    void *__vtable;
    char unknown04[8];
    igObjectRefMember _binaryDefinition;
    igStringMember _textDefinition;
    igStringMember _entryPoint;
    igStringMember _profile;
    igObjectRefMember _dxDeclaration;
    char unknown20[8];
    igObjectRefMember _trackedElements;
    igObjectRefMember _stateList;
    igObjectRefMember _inputList;
    igObjectRefMember _defineList;
    char unknown38[4];
};

extern "C" igVertexShaderAttrObject *fn_800AC6A0(igVertexShaderAttrObject *self, short flags)
{
    if (self) {
        self->__vtable = igVertexShaderAttr_vtable;
        self->_defineList.~igObjectRefMember();
        self->_inputList.~igObjectRefMember();
        self->_stateList.~igObjectRefMember();
        self->_trackedElements.~igObjectRefMember();
        self->_dxDeclaration.~igObjectRefMember();
        self->_profile.~igStringMember();
        self->_entryPoint.~igStringMember();
        self->_textDefinition.~igStringMember();
        self->_binaryDefinition.~igObjectRefMember();
        if (flags > 0) fn_80066DFC(self);
    }
    return self;
}
