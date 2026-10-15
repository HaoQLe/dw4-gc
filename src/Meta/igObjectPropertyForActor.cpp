// igObjectPropertyForActor: Alchemy class registration (0x8013DB4C..0x8013DD10). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igObjectPropertyForActor)
META_DECLARE(igObjectPropertyForNode)

extern "C" {
void fn_8012FC48();
void *fn_8013BF68();
void fn_8013DD10();
extern char igObjectPropertyForActor_dependencies[8];
extern char lbl_804A5C7C[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
}

struct Instance_804A5C7C : igObjectInstance {
    char unknown04[28];
    igObjectRefMember _object;
    inline ~Instance_804A5C7C() { __vtable = lbl_804A5C7C; }
};

struct igObjectPropertyForNodeInstance : Instance_804A5C7C {
    inline ~igObjectPropertyForNodeInstance() { __vtable = igObjectPropertyForNode_vtable; }
};

struct igObjectPropertyForActorInstance : igObjectPropertyForNodeInstance {
    char unknown24[12];
    inline ~igObjectPropertyForActorInstance() { __vtable = igObjectPropertyForActor_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igObjectPropertyForActor)

void *igObjectPropertyForActor_vtableRead()
{
    igObjectPropertyForActorInstance object;
    object.__vtable = lbl_804A6460;
    object.__vtable = lbl_804AAF48;
    object.__vtable = lbl_804A6338;
    object.__vtable = lbl_804A5C7C;
    object._object._value = 0;
    object.__vtable = igObjectPropertyForNode_vtable;
    object.__vtable = igObjectPropertyForActor_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igObjectPropertyForActor)

void igObjectPropertyForActor_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igObjectPropertyForActor_meta, igObjectPropertyForNode_register,
                       fn_8013BF68, igObjectPropertyForActor_getMetaCall,
                       igObjectPropertyForActor_className, 0x2C,
                       igObjectPropertyForActor_vtableRead, fn_8013DD10, 0, igObjectPropertyForActor_dependencies);
}

META_GET_META_CALL(igObjectPropertyForActor)

}
#pragma pop
