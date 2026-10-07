#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8029E33C(void *,void *,void *,void *,void *,void *);
void fn_803FA27C(void *,...);
void *fn_803FEF5C(void *);
void *fn_803FF2C4(void *);
extern char lbl_804615C8[];
extern char lbl_80461600[];
}
extern "C" {
void fn_803FE2D0(int p0,int p1,int p2,int p3,int p4,int p5){
 void *value0;
 void *value1;
 void *value2;
 void *local2;
 void *local1;
 void *local0;
 value0=fn_803FF2C4((void *)p0);
 if((int)(int)value0==0){
  fn_803FA27C(lbl_80461600);
 } else {
  value1=fn_803FEF5C((void *)p0);
  reinterpret_cast<void (*)(void *,void *,void *)>(*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0))+60))((void *)p0,value1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0));
  value2=fn_8029E33C((void *)p1,(void *)p2,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+440),&local2,&local0,&local1);
  if((int)(int)value2==0){
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+452)=local2;
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+456)=local0;
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+460)=local1;
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+448)=(void *)1;
   return;
  } else {
   fn_803FA27C(lbl_804615C8);
   return;
  }
 }
}
}
#pragma pop
