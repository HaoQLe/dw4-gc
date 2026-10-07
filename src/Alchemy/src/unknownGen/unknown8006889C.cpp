#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern void *lbl_80561710;
}
extern "C" {
void *fn_8006889C(){return lbl_80561710;}
void *fn_800688A4(int p0,int p1){
 void *value0;
 if((unsigned int)p1==0){
  return (void *)p0;
 }
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+4);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+4)=(reinterpret_cast<char *>(value0)+1);
 return value0;
}
}
#pragma pop
