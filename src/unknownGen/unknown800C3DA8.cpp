#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800BCB6C(void *,void *);
}
extern "C" {
void igTextureFunctionAttr_virtual64(int p0,int p1,int p2,int p3,int p4,int p5){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+16)=(void *)(int)(short)p1;
 fn_800BCB6C((void *)p0,(void *)p1);
}
}
#pragma pop
