#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8029D710();
void *fn_802A1974(void *,void *);
void fn_803E4FBC(void *);
void fn_803E5038(void *,void *);
void fn_803E50B8(void *);
void fn_803E5144(void *);
void *fn_803E6A2C(void *);
void fn_803FA27C(void *,...);
void *fn_803FF2C4(void *);
extern char lbl_804605A4[];
extern char lbl_804605D0[];
}
extern "C" {
void fn_803F9D00(int p0){
 fn_803E50B8(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+64));
}
void fn_803F9D24(int p0){
 fn_803E5144(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+64));
}
void fn_803F9D48(int p0){
 fn_803E4FBC(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+64));
}
void fn_803F9D6C(int p0,int p1){
 fn_803E5038(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+64),(void *)p1);
}
void fn_803F9D90(){}
void fn_803F9D94(){}
void *fn_803F9D98(){return fn_8029D710();}
void fn_803F9DB8(int p0,int p1,int p2,int p3,int p4,int p5){
 void *value2;
 void *value0;
 void *value1;
 void *value3;
 value2=fn_803FF2C4((void *)p0);
 if((int)(int)value2==0){
  fn_803FA27C(lbl_804605A4);
  return;
 } else {
  value0=(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+116);
  value1=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+64);
  if((int)(int)value0==1){
   if((int)p1==0){
    *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+117)=1;
   }
  }
  if((int)*reinterpret_cast<signed char *>(reinterpret_cast<char *>((void *)p0)+116)==0){
   if((int)p1==1){
    value3=fn_803E6A2C(value1);
    if((int)(int)value3!=0){
     fn_803FA27C(lbl_804605D0);
    }
   }
  }
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+116)=(unsigned char)(int)(void *)p1;
  return;
 }
}
void *fn_803F9E60(int p0,int p1){
 void *value0;
 void *value1;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+76);
 if(value0){
  value1=fn_802A1974(value0,(void *)p1);
  return value1;
 } else {
  return value0;
 }
}
}
#pragma pop
