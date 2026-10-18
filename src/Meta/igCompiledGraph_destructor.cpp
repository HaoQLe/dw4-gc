// fn_801C3180: the deleting destructor of igCompiledGraph. Written by tools/alchemymeta/dtorsrc.py.
#include <meta/register.h>

META_DECLARE(igCompiledGraph)
META_DECLARE(igGroup)
META_DECLARE(igNamedObject)
META_DECLARE(igNode)
extern "C" {
void fn_80066DFC(void *object);   // frees an object
}

struct igNamedObjectObject {
    void *__vtable;
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectObject() { __vtable = igNamedObject_vtable; }
};
struct igNodeObject : igNamedObjectObject {
    igObjectRefMember _bound;
    igObjectRefMember _parentList;
    inline ~igNodeObject() { __vtable = igNode_vtable; }
};
struct igGroupObject : igNodeObject {
    char unknown14[8];
    igObjectRefMember _childList;
    inline ~igGroupObject() { __vtable = igGroup_vtable; }
};
struct igCompiledGraphObject : igGroupObject {
    igObjectRefMember _compiledList;
    igObjectRefMember _srcMvmAttrIdx;
    igObjectRefMember _destMvmAttrPtr;
    igObjectRefMember _instMvmAttrPtr;
    igObjectRefMember _bRecList;
    char unknown34[4];
    igObjectRefMember _destRestoreAttrPtr;
    igObjectRefMember _restoreAttrs;
    igObjectRefMember _dupDefaultAttrs;
    igObjectRefMember _mvmList;
    igObjectRefMember _xformInfoList;
    char unknown4C[8];
    igObjectRefMember _matOptStateAttr;
    igObjectRefMember _environmentShader2List;
};

extern "C" igCompiledGraphObject *fn_801C3180(igCompiledGraphObject *self, short flags)
{
    if (self) {
        self->__vtable = igCompiledGraph_vtable;
        self->_environmentShader2List.~igObjectRefMember();
        self->_matOptStateAttr.~igObjectRefMember();
        self->_xformInfoList.~igObjectRefMember();
        self->_mvmList.~igObjectRefMember();
        self->_dupDefaultAttrs.~igObjectRefMember();
        self->_restoreAttrs.~igObjectRefMember();
        self->_destRestoreAttrPtr.~igObjectRefMember();
        self->_bRecList.~igObjectRefMember();
        self->_instMvmAttrPtr.~igObjectRefMember();
        self->_destMvmAttrPtr.~igObjectRefMember();
        self->_srcMvmAttrIdx.~igObjectRefMember();
        self->_compiledList.~igObjectRefMember();
        self->igGroupObject::~igGroupObject();
        if (flags > 0) fn_80066DFC(self);
    }
    return self;
}
