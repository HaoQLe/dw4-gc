#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_803C5F68(void *,int);
void fn_803C603C(void *,int);
void fn_803C6044(void *,void *,void *);
void fn_803C6058(void *,int);
void fn_803C6060(void *,int);
void fn_803FA27C(void *,...);
void *fn_803FF2C4(void *);
extern char lbl_80460A2C[];
}
extern "C" {
void fn_803FAB38(int p0,int p1,int p2){
 void *value1;
 void *value0;
 value1=fn_803FF2C4((void *)p0);
 if((int)(int)value1==0){
  fn_803FA27C(lbl_80460A2C);
  return;
 } else {
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+172);
  fn_803C6044(value0,(void *)p1,(void *)p2);
  fn_803C603C(value0,1);
  return;
 }
}
void fn_803FABB8(int p0,int p1){
 fn_803C5F68(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+172),(int)(int)((void *)p1));
}
void fn_803FABDC(int p0,int p1,int p2,int p3,int p4,int p5){
 fn_803C5F68(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+172),(int)(int)((void *)p1));
}
void fn_803FAC00(int p0,int p1){
 fn_803C6058(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+172),(int)(int)((void *)p1));
}
void fn_803FAC24(int p0,int p1){
 fn_803C6060(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+172),(int)(int)((void *)p1));
}
}
#pragma pop
