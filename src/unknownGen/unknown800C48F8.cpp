#include <unknownGen.h>
#include <meta/igTextureMatrixStateAttr.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800BCB6C(void *,void *);
}
extern "C" {
void igTextureMatrixStateAttr_virtual64(int p0,int p1,int p2,int p3,int p4,int p5){
 reinterpret_cast<Meta::igTextureMatrixStateAttr *>((void *)p0)->_unitID=(int)(void *)(int)(short)p1;
 fn_800BCB6C((void *)p0,(void *)p1);
}
}
#pragma pop
