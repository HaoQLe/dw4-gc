#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800BCB74(void *);
}
extern "C" {
void igTextureAttr_virtual68(){}
void igTextureAttr_virtual44(int p0){
 void *value0;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+60);
 if((int)(int)value0==0){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+60)=(void *)1;
 }
 fn_800BCB74((void *)p0);
}
}
#pragma pop
