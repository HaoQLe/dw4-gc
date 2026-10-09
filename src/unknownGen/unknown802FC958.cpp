#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8028A730(void *,void *);
extern char lbl_80535124[];
}
extern "C" {
void beGenerater_virtual88(int p0){
 void *value0;
 if(!*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+32)){
  value0=fn_8028A730(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),*reinterpret_cast<void **>((lbl_80535124+0)));
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+32)=value0;
  return;
 } else {
  return;
 }
}
}
#pragma pop
