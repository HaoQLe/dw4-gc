#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_803EF444(void *,void *,void *,void *);
void fn_803F02A4(void *,void *);
void fn_803FA27C(void *,...);
void *fn_803FF2C4(void *);
void *fn_803FF3C4(void *);
extern char lbl_804602F0[];
}
struct UnknownGenL803F96E0_8 {
 int m08;
 int m0C;
 int m10;
 short m14;
 short m16;
};
extern "C" {
void fn_803F9648(int p0,int p1,int p2,int p3,int p4,int p5){
 void *value4;
 void *value0;
 void *value1;
 void *value2;
 void *value5;
 void *value3;
 value4=fn_803FF2C4((void *)p0);
 if((int)(int)value4==0){
  fn_803FA27C(lbl_804602F0);
 } else {
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+124);
  value1=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+128);
  value2=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+132);
  value5=fn_803FF3C4((void *)p0);
  if((int)(int)value1>(int)(int)value2){
   fn_803F02A4(value5,value0);
   value3=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+132);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+132)=(reinterpret_cast<char *>(value3)+1);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+128)=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+132);
   return;
  } else {
   return;
  }
 }
}
void fn_803F96E0(int p0,int p1,int p2,int p3,int p4,int p5){
 UnknownGenL803F96E0_8 local0;
 fn_803EF444((void *)p0,(void *)p1,(void *)p2,&local0);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p3)+0)=(void *)(int)local0.m10;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p3)+4)=(void *)(int)local0.m08;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p3)+8)=(void *)(int)local0.m0C;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p3)+12)=(void *)(int)local0.m16;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p3)+16)=(void *)(int)local0.m14;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p3)+20)=(void *)(int)local0.m14;
}
}
#pragma pop
