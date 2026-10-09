#include <unknownGen.h>
#include <meta/beNDMWStatusSubSlot.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80382858(void *,void *,void *,void *);
}
extern "C" {
void beNDMWStatusSubSlot_virtual88(int p0,int p1){
 fn_80382858((void *)p0,reinterpret_cast<Meta::beNDMWStatusSubSlot *>((void *)p0)->_subSlot,(void *)reinterpret_cast<Meta::beNDMWStatusSubSlot *>((void *)p0)->_kindListPos,(void *)p1);
}
}
#pragma pop
