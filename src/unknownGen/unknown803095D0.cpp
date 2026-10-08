#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *strcmp(void *,void *);
}
extern "C" {
void *fn_803095D0(int p0,int p1,int p2,int p3,int p4,int p5){
 void *value0;
 value0=strcmp(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8),(void *)p1);
 if((int)(int)value0!=0){
  return (void *)0;
 } else {
  return (void *)(int)((unsigned int)__cntlzw(((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12)-p2))>>5);
 }
}
}
#pragma pop
