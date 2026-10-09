#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern void *lbl_8055DC14;
void *vsnprintf(void *,int,void *,void *);
}
struct UnknownGenL8006F138_8 {
 char pad08[4095];
 unsigned char m1007;
};
extern "C" {
void *fn_8006F138(int p0,int p1,int p2){
 void *value0;
 void *value1;
 UnknownGenL8006F138_8 local0;
 if(!lbl_8055DC14){
  return (void *)0;
 } else {
  value0=vsnprintf(&local0,4096,(void *)p1,(void *)p2);
  if(((int)(int)value0<0||(int)(int)value0>=4096)){
   local0.m1007=(unsigned char)0;
  }
  value1=reinterpret_cast<void * (*)(void *,void *)>(lbl_8055DC14)((void *)p0,&local0);
  return value1;
 }
}
}
#pragma pop
