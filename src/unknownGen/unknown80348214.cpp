#include <unknownGen.h>
#include <meta/beNDMWAfsSetup.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8028A730(void *,void *);
void fn_802F667C();
extern void *lbl_80535584;
}
extern "C" {
void beNDMWAfsSetup_virtual68(int p0){
 void *value0=fn_8028A730(reinterpret_cast<Meta::beNDMWAfsSetup *>((void *)p0)->_insight,lbl_80535584);
 fn_802F667C();
}
}
#pragma pop
