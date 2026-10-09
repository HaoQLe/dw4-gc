#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80068128(void *,void *);
extern void *lbl_8056469C;
extern void *lbl_80564FA4;
}
extern "C" {
void igChangePlayMode_virtual88(int p0,int p1){
 void *value1;
 void *value2;
 void *value0;
 value1=fn_80068128((void *)p1,lbl_8056469C);
 if((unsigned char)(int)value1){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+36)=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+44);
  return;
 } else {
  value2=fn_80068128((void *)p1,lbl_80564FA4);
  if((unsigned char)(int)value2){
   value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+44);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+12)=value0;
  }
  return;
 }
}
}
#pragma pop
