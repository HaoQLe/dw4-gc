// igInverseKinematicsSolver: Alchemy class registration (0x801BC334..0x801BC61C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igInverseKinematicsSolver)
META_DECLARE(igNamedObject)
META_DECLARE(igNode)

extern "C" {
void fn_801AA6DC();
void *fn_801BBBF0();
void *fn_801BCB1C();
extern char igInverseKinematicsSolver_dependencies[8];
extern char igInverseKinematicsSolver_fieldNames[4];
extern char igInverseKinematicsSolver_fieldOffsets[4];
extern char igInverseKinematicsSolver_fieldStorage[4];
extern char igInverseKinematicsSolver_fieldTypes[4];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct igNodeInstance : igNamedObjectInstance {
    igObjectRefMember _bound;
    igObjectRefMember _parentList;
    inline ~igNodeInstance() { __vtable = igNode_vtable; }
};

struct igInverseKinematicsSolverInstance : igNodeInstance {
    char unknown14[8];
    igObjectRefMember _ikHandles;
    char unknown20[8];
    inline ~igInverseKinematicsSolverInstance() { __vtable = igInverseKinematicsSolver_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igInverseKinematicsSolver)

void *igInverseKinematicsSolver_vtableRead()
{
    igInverseKinematicsSolverInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igNode_vtable;
    object._bound._value = 0;
    object._parentList._value = 0;
    object.__vtable = igInverseKinematicsSolver_vtable;
    object._ikHandles._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igInverseKinematicsSolver)

void igInverseKinematicsSolver_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igInverseKinematicsSolver_meta, igNode_register,
                       fn_801BBBF0, igInverseKinematicsSolver_getMetaCall,
                       igInverseKinematicsSolver_className, 0x20,
                       igInverseKinematicsSolver_vtableRead, igInverseKinematicsSolver_fieldInit, 0, igInverseKinematicsSolver_dependencies);
}

META_GET_META_CALL(igInverseKinematicsSolver)

void igInverseKinematicsSolver_fieldInit()
{
    Meta::igMetaObject *meta = igInverseKinematicsSolver_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igInverseKinematicsSolver_fieldTypes, 1);
    Meta::igObjectRefMetaField *ikHandlesField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_801BCB1C();
    ikHandlesField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    ikHandlesField->_construct = true;
    meta_setupFields(meta, igInverseKinematicsSolver_fieldNames, igInverseKinematicsSolver_fieldStorage, igInverseKinematicsSolver_fieldOffsets, base);
}

}
#pragma pop
