#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8028A730(void *,void *);
extern char lbl_80534698[];
extern void *lbl_80534DF0;
extern char lbl_80535124[];
}
extern "C" {
void fn_803082A4(int p0){
 void *value0;
 void *value1;
 if(!*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+32)){
  value0=fn_8028A730(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),*reinterpret_cast<void **>((lbl_80535124+0)));
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+32)=value0;
 }
 if(!*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+36)){
  value1=fn_8028A730(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),*reinterpret_cast<void **>((lbl_80534698+0)));
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+36)=value1;
  return;
 } else {
  return;
 }
}
void *fn_80308314(){return lbl_80534DF0;}
}
#pragma pop
