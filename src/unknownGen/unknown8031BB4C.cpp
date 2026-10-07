#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8028A730(void *,void *);
extern char lbl_80534FBC[];
}
extern "C" {
void fn_8031BB4C(int p0){
 void *value0;
 if(!*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20)){
  value0=fn_8028A730(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),*reinterpret_cast<void **>((lbl_80534FBC+0)));
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+20)=value0;
  return;
 } else {
  return;
 }
}
}
#pragma pop
