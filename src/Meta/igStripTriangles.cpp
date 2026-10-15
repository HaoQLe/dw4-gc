// igStripTriangles: Alchemy class registration (0x801306EC..0x801308D0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igStripTriangles)
META_DECLARE(igOptBase)

extern "C" {
void fn_8012FC48();
void *fn_801308D0();
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

struct igStripTrianglesInstance : Instance_804A4A04 {
    char unknown28[8];
    inline ~igStripTrianglesInstance() { __vtable = igStripTriangles_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igStripTriangles)

void *igStripTriangles_vtableRead()
{
    igStripTrianglesInstance object;
    object.__vtable = lbl_804A6460;
    object.__vtable = lbl_804AAF48;
    object.__vtable = lbl_804A4A04;
    object._registry._value = 0;
    object._configuration._value = 0;
    object.__vtable = igStripTriangles_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igStripTriangles)

void igStripTriangles_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igStripTriangles_meta, igOptBase_register,
                       fn_801308D0, igStripTriangles_getMetaCall,
                       igStripTriangles_className, 0x30,
                       igStripTriangles_vtableRead, igStripTriangles_fieldInit, 0, 0);
}

META_GET_META_CALL(igStripTriangles)

}
#pragma pop
