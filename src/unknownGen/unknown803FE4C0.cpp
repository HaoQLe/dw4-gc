#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802A1AC8(void *);
void *fn_803F0844(void *);
void fn_803F9DB8(void *,int);
void fn_803FA27C(void *,...);
void fn_803FA51C(void *);
void fn_803FDDAC(int);
void *fn_803FF2C4(void *);
void fn_803FF418(void *);
void *fn_804001F8(void *);
extern char lbl_80461680[];
extern char lbl_804616A8[];
}
extern "C" {
void fn_803FE4C0(int p0){
 void *value2;
 void *value0;
 void *value3;
 void *value1;
 value2=fn_803FF2C4((void *)p0);
 if((int)(int)value2==0){
  fn_803FA27C(lbl_80461680);
  return;
 } else {
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+64);
  if(value0){
   fn_803FF418((void *)p0);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+8)=(void *)0;
   value3=fn_803F0844(value0);
   if((int)(int)value3!=0){
    fn_803FDDAC(-308);
    fn_803FA27C(lbl_804616A8);
   }
   fn_804001F8((reinterpret_cast<char *>((void *)p0)+660));
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+692)=(void *)0;
   value1=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+68);
   if(value1){
    fn_803FA51C(value1);
   }
   fn_802A1AC8(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+76));
  }
  fn_803F9DB8((void *)p0,0);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+120)=(void *)0;
  fn_802A1AC8(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+76));
  return;
 }
}
void fn_803FE598(int p0){
 void *value0;
 void *value2;
 void *value1;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+64);
 if(value0){
  fn_803FF418((void *)p0);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+8)=(void *)0;
  value2=fn_803F0844(value0);
  if((int)(int)value2!=0){
   fn_803FDDAC(-308);
   fn_803FA27C(lbl_804616A8);
  }
  fn_804001F8((reinterpret_cast<char *>((void *)p0)+660));
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+692)=(void *)0;
  value1=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+68);
  if(value1){
   fn_803FA51C(value1);
  }
  fn_802A1AC8(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+76));
  return;
 } else {
  return;
 }
}
}
#pragma pop
