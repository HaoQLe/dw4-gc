#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8028A730(void *,void *);
extern char lbl_805346A8[];
extern char lbl_80534AAC[];
}
extern "C" {
void beNDMWLogo_virtual88(int p0){
 void *value0;
 void *value1;
 if(!*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+36)){
  value0=fn_8028A730(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),*reinterpret_cast<void **>((lbl_80534AAC+0)));
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+36)=value0;
 }
 if(!*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+32)){
  value1=fn_8028A730(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),*reinterpret_cast<void **>((lbl_805346A8+0)));
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+32)=value1;
  return;
 } else {
  return;
 }
}
}
#pragma pop
