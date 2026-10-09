#include <unknownGen.h>
#include <meta/beNDMWStatusSubSlot.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80381D20(void *,void *,void *,void *);
}
extern "C" {
void beNDMWStatusSubSlot_virtual84(int p0){
 fn_80381D20((void *)p0,reinterpret_cast<Meta::beNDMWStatusSubSlot *>((void *)p0)->_subSlot,(void *)reinterpret_cast<Meta::beNDMWStatusSubSlot *>((void *)p0)->_kindListPos,(void *)reinterpret_cast<Meta::beNDMWStatusSubSlot *>((void *)p0)->_retCode);
}
}
#pragma pop
