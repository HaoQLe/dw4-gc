// igVertexBlending: Alchemy class registration (0x8012FC7C..0x8012FEB0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igVertexBlending)
META_DECLARE(igOptVisitObject)

extern "C" {
void fn_8012FC48();
void *fn_8012FEB0();
extern char lbl_804A46AC[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
}

struct Instance_804A4A04 : igObjectInstance {
    char unknown04[28];
    igObjectRefMember _registry;
    igObjectRefMember _configuration;
    inline ~Instance_804A4A04() { __vtable = lbl_804A4A04; }
};

struct Instance_804A46AC : Instance_804A4A04 {
    igObjectRefMember _visitedMetaObject;
    inline ~Instance_804A46AC() { __vtable = lbl_804A46AC; }
};

struct igVertexBlendingInstance : Instance_804A46AC {
    char unknown2C[12];
    inline ~igVertexBlendingInstance() { __vtable = igVertexBlending_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igVertexBlending)

void *igVertexBlending_vtableRead()
{
    igVertexBlendingInstance object;
    object.__vtable = lbl_804A6460;
    object.__vtable = lbl_804AAF48;
    object.__vtable = lbl_804A4A04;
    object._registry._value = 0;
    object._configuration._value = 0;
    object.__vtable = lbl_804A46AC;
    object._visitedMetaObject._value = 0;
    object.__vtable = igVertexBlending_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igVertexBlending)

void igVertexBlending_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igVertexBlending_meta, igOptVisitObject_register,
                       fn_8012FEB0, igVertexBlending_getMetaCall,
                       igVertexBlending_className, 0x30,
                       igVertexBlending_vtableRead, igVertexBlending_fieldInit, 0, 0);
}

META_GET_META_CALL(igVertexBlending)

}
#pragma pop
