#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern char lbl_8041B39C[];
extern void *lbl_805305D8;
extern char lbl_805305DC[];
}
extern "C" {
void *fn_802A4F90(int p0){
 if((unsigned int)p0==0){
  void *value0=lbl_805305D8;
  if(value0){
   reinterpret_cast<void (*)(void *,void *,void *)>(value0)(*reinterpret_cast<void **>((lbl_805305DC+0)),lbl_8041B39C,(void *)0);
  }
  return (void *)0;
 } else {
  return *reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20);
 }
}
}
#pragma pop
