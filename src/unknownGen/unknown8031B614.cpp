#include <unknownGen.h>
#include <meta/beLua.h>
#include <meta/bePadManager.h>
#include <meta/beSystem.h>
#include <meta/beTimer.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8028A730(void *,void *);
extern void *lbl_805346A8;
extern void *lbl_80534AAC;
extern void *lbl_80535124;
}
extern "C" {
void beTimer_virtual64(int p0){
 void *value0=fn_8028A730(reinterpret_cast<Meta::beTimer *>((void *)p0)->_insight,lbl_805346A8);
 reinterpret_cast<Meta::beTimer *>((void *)p0)->_system=(Meta::beSystem *)value0;
 void *value1=fn_8028A730(reinterpret_cast<Meta::beTimer *>((void *)p0)->_insight,lbl_80534AAC);
 reinterpret_cast<Meta::beTimer *>((void *)p0)->_padManager=(Meta::bePadManager *)value1;
 void *value2=fn_8028A730(reinterpret_cast<Meta::beTimer *>((void *)p0)->_insight,lbl_80535124);
 reinterpret_cast<Meta::beTimer *>((void *)p0)->_luaManager=(Meta::beLua *)value2;
}
}
#pragma pop
