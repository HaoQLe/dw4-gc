#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8028A730(void *,void *);
extern void *lbl_805347B4;
extern void *lbl_80534814;
extern char lbl_80534AAC[];
}
extern "C" {
void *fn_80313228(){return lbl_80534814;}
void fn_80313238(int p0){
 void *value0;
 if(!*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+32)){
  value0=fn_8028A730(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),*reinterpret_cast<void **>((lbl_80534AAC+0)));
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+32)=value0;
  return;
 } else {
  return;
 }
}
void *fn_80313284(){return lbl_805347B4;}
}
#pragma pop
