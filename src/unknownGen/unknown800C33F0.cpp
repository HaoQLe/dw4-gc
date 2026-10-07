#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800BCB74(void *);
}
extern "C" {
void fn_800C33F0(){}
void fn_800C33F4(int p0){
 void *value0;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+60);
 if((int)(int)value0==0){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+60)=(void *)1;
 }
 fn_800BCB74((void *)p0);
}
}
#pragma pop
