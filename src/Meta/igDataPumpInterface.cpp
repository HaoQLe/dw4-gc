// igDataPumpInterface: Alchemy class registration (0x80218EEC..0x80218FD4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igDataPumpInterface)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void fn_80216620();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igDataPumpInterface)

META_ARK_REGISTER(igDataPumpInterface)

void igDataPumpInterface_register()
{
    fn_80216620();
    meta_registerClass(1, &igDataPumpInterface_meta, igObject_register,
                       fn_800237D0, igDataPumpInterface_getMetaCall,
                       igDataPumpInterface_className, 0x8,
                       0, 0, 0, 0);
}

META_GET_META_CALL(igDataPumpInterface)

}
#pragma pop
