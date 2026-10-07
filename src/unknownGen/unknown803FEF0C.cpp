#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_803F0934(void *);
void fn_803FA27C(void *,...);
void fn_803FDDAC(int);
extern char lbl_80461824[];
extern char lbl_8046186C[];
}
extern "C" {
void *fn_803FEF0C(int p0){
 void *value0;
 value0=fn_803F0934(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+64));
 if((int)(int)value0!=0){
  fn_803FDDAC(-307);
  fn_803FA27C(lbl_80461824);
  return (void *)-307;
 } else {
  return (void *)0;
 }
}
void *fn_803FEF5C(int p0){
 void *value0;
 if((unsigned int)p0==0){
  value0=(void *)0;
 } else {
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+4);
 }
 if((int)(int)value0==0){
  fn_803FA27C(lbl_8046186C);
  return (void *)0;
 } else {
  return *reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+468);
 }
}
}
#pragma pop
