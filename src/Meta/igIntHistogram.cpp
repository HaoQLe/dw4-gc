// igIntHistogram: Alchemy class registration (0x8021849C..0x80218670). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igIntHistogram)
META_DECLARE(igHistogramBase)

extern "C" {
void fn_80216620();
void *fn_80218670();
extern char lbl_804BC70C[];
}

struct igHistogramBaseInstance : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _bins;
    inline ~igHistogramBaseInstance() { __vtable = igHistogramBase_vtable; }
};

struct Instance_804BC70C : igHistogramBaseInstance {
    inline ~Instance_804BC70C() { __vtable = lbl_804BC70C; }
};

struct igIntHistogramInstance : Instance_804BC70C {
    char unknown0C[36];
    inline ~igIntHistogramInstance() { __vtable = igIntHistogram_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igIntHistogram)

META_GET_META(igIntHistogram)

void *igIntHistogram_vtableRead()
{
    igIntHistogramInstance object;
    object.__vtable = igHistogramBase_vtable;
    object._bins._value = 0;
    object.__vtable = lbl_804BC70C;
    object.__vtable = igIntHistogram_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igIntHistogram)

void igIntHistogram_register()
{
    fn_80216620();
    meta_registerClass(0, &igIntHistogram_meta, igHistogramBase_register,
                       fn_80218670, igIntHistogram_getMetaCall,
                       igIntHistogram_className, 0x24,
                       igIntHistogram_vtableRead, igIntHistogram_fieldInit, 0, 0);
}

META_GET_META_CALL(igIntHistogram)

}
#pragma pop
