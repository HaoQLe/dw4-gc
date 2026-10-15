// igResortTransparency: Alchemy class registration (0x80133E9C..0x801340C8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igResortTransparency)
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

struct igResortTransparencyInstance : Instance_804A46AC {
    char unknown2C[12];
    inline ~igResortTransparencyInstance() { __vtable = igResortTransparency_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igResortTransparency)

void *igResortTransparency_vtableRead()
{
    igResortTransparencyInstance object;
    object.__vtable = lbl_804A6460;
    object.__vtable = lbl_804AAF48;
    object.__vtable = lbl_804A4A04;
    object._registry._value = 0;
    object._configuration._value = 0;
    object.__vtable = lbl_804A46AC;
    object._visitedMetaObject._value = 0;
    object.__vtable = igResortTransparency_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igResortTransparency)

void igResortTransparency_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igResortTransparency_meta, igOptVisitObject_register,
                       fn_8012FEB0, igResortTransparency_getMetaCall,
                       igResortTransparency_className, 0x2C,
                       igResortTransparency_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igResortTransparency)

}
#pragma pop
