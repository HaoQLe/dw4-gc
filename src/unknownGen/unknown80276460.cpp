#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8027607C(void *);
}
extern "C" {
void *fn_80276460(int p0){
 void *value0;
 value0=fn_8027607C((void *)p0);
 if(((int)((unsigned int)(int)value0&0x3F)==2&&(int)(((unsigned int)(int)value0>>6)&0x1FF)==255)){
  return (void *)1;
 } else {
  return (void *)0;
 }
}
}
#pragma pop
