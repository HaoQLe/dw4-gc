#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern char lbl_8041B524[];
extern char lbl_8041B570[];
extern char lbl_80530FDC[];
extern void *lbl_80530FE0;
}
extern "C" {
void *fn_802A5B08(int p0){
 if((unsigned int)p0==0){
  void *value0=lbl_80530FE0;
  if(value0){
   reinterpret_cast<void (*)(void *,void *,void *)>(value0)(*reinterpret_cast<void **>((lbl_80530FDC+0)),lbl_8041B570,(void *)0);
  }
  return (void *)0;
 } else {
  return *reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16);
 }
}
void *fn_802A5B68(int p0){
 if((unsigned int)p0==0){
  void *value0=lbl_80530FE0;
  if(value0){
   reinterpret_cast<void (*)(void *,void *,void *)>(value0)(*reinterpret_cast<void **>((lbl_80530FDC+0)),lbl_8041B524,(void *)0);
  }
  return (void *)0;
 } else {
  return (void *)(int)*reinterpret_cast<signed char *>(reinterpret_cast<char *>((void *)p0)+2);
 }
}
}
#pragma pop
