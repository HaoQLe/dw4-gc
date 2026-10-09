#include <unknownGen.h>
#include <meta/igTextureStateAttr.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800BCB6C(void *,void *);
void fn_800BCB74(void *);
}
extern "C" {
void igTextureStateAttr_virtual44(int p0){
 fn_800BCB74((void *)p0);
 fn_800BCB6C((void *)p0,(void *)(int)(short)(int)(void *)reinterpret_cast<Meta::igTextureStateAttr *>((void *)p0)->_unitID);
}
}
#pragma pop
