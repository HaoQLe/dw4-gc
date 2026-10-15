// igIGBFile: Alchemy class registration (0x8002F178..0x8002F23C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igIGBFile)
META_DECLARE(igDirectory)

extern "C" {
void fn_80021B94();
void fn_8002F724();
extern char igIGBFile_dependencies[32];
void *igIGBFile_parentMeta();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(igIGBFile)

void igIGBFile_register()
{
    fn_80021B94();
    meta_registerClass(0, &igIGBFile_meta, igDirectory_register,
                       igIGBFile_parentMeta, igIGBFile_getMetaCall,
                       igIGBFile_className, 0x134,
                       igIGBFile_vtableRead, igIGBFile_fieldInit, fn_8002F724, igIGBFile_dependencies);
}

META_GET_META_CALL(igIGBFile)

}
#pragma pop
