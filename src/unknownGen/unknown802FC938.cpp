#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8028A730(void *,void *);
extern char lbl_80535124[];
extern void *lbl_80535288;
extern void *lbl_8053533C;
extern void *lbl_80535358;
}
extern "C" {
void *fn_802FC938(){return lbl_8053533C;}
void *fn_802FC948(){return lbl_80535358;}
void fn_802FC958(int p0){
 void *value0;
 if(!*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+32)){
  value0=fn_8028A730(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),*reinterpret_cast<void **>((lbl_80535124+0)));
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+32)=value0;
  return;
 } else {
  return;
 }
}
void *fn_802FC9A4(){return lbl_80535288;}
}
#pragma pop
