#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802A4E98();
void *fn_802A4F28();
extern char lbl_8041B39C[];
extern char lbl_8041B3CC[];
extern void *lbl_805305D8;
extern char lbl_805305DC[];
}
extern "C" {
void *fn_802A5088(int p0){
 if((unsigned int)p0==0){
  void *value0=lbl_805305D8;
  if(value0){
   reinterpret_cast<void (*)(void *,void *,void *)>(value0)(*reinterpret_cast<void **>((lbl_805305DC+0)),lbl_8041B3CC,(void *)0);
  }
  return (void *)0;
 } else {
  return *reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+4);
 }
}
void *fn_802A50E8(int p0){
 if((unsigned int)p0==0){
  void *value0=lbl_805305D8;
  if(value0){
   reinterpret_cast<void (*)(void *,void *,void *)>(value0)(*reinterpret_cast<void **>((lbl_805305DC+0)),lbl_8041B39C,(void *)0);
  }
  return (void *)0;
 } else {
  return (void *)(int)*reinterpret_cast<signed char *>(reinterpret_cast<char *>((void *)p0)+1);
 }
}
void fn_802A514C(int p0){
 void *value1;
 if((int)p0==0){
  void *value0=lbl_805305D8;
  if(value0){
   reinterpret_cast<void (*)(void *,void *,void *)>(value0)(*reinterpret_cast<void **>((lbl_805305DC+0)),lbl_8041B39C,(void *)0);
  }
 } else {
  value1=fn_802A4F28();
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+1)=0;
  fn_802A4E98();
 }
}
}
#pragma pop
