#include <unknownGen.h>
#include <meta/beNDMWMdlPlayer2.h>
#include <meta/bePadManager.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8028A730(void *,void *);
void fn_802F24B0(void *);
extern void *bePadManager_meta;
}
extern "C" {
void beNDMWMdlPlayer2_virtual64(int p0){
 fn_802F24B0((void *)p0);
 void *value0=fn_8028A730(reinterpret_cast<Meta::beNDMWMdlPlayer2 *>((void *)p0)->_insight,bePadManager_meta);
 reinterpret_cast<Meta::beNDMWMdlPlayer2 *>((void *)p0)->_padManager=(Meta::bePadManager *)value0;
}
}
#pragma pop
