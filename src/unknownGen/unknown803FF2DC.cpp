#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_803EFD5C(void *);
void fn_803F2DA8(void *,void *,void *);
void fn_803F9E60(void *,void *);
void fn_803FA27C(void *,...);
void fn_803FA614(void *);
extern char lbl_80461840[];
extern char lbl_804619C4[];
extern char lbl_804619F4[];
}
extern "C" {
void fn_803FF2DC(int p0,int p1){
 fn_803FA614(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+68));
 fn_803F9E60((void *)p0,(void *)p1);
}
void fn_803FF324(int p0,int p1,int p2){
 void *value1;
 void *value0;
 if((unsigned int)p0!=0){
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+64);
  value1=value0;
 } else {
  value1=(void *)0;
 }
 fn_803F2DA8(value1,(void *)p1,(void *)p2);
}
void fn_803FF358(int p0){
 void *value0;
 void *value1;
 if((unsigned int)p0==0){
  value0=(void *)0;
 } else {
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+4);
 }
 if((int)(int)value0==0){
  fn_803FA27C(lbl_804619C4);
 } else {
  value1=fn_803EFD5C(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+64));
  if((int)(int)value1!=0){
   fn_803FA27C(lbl_804619F4);
   return;
  } else {
   return;
  }
 }
}
void *fn_803FF3C4(int p0){
 void *value0;
 if((unsigned int)p0==0){
  value0=(void *)0;
 } else {
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+4);
 }
 if((int)(int)value0==0){
  fn_803FA27C(lbl_80461840);
  return (void *)0;
 } else {
  return *reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+64);
 }
}
}
#pragma pop
