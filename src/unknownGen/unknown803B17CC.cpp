#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8028A730(void *,void *);
extern char lbl_805346A8[];
extern char lbl_80534AAC[];
extern void *lbl_80536728;
extern void *lbl_80536730;
extern void *lbl_80536734;
extern void *lbl_8053673C;
extern void *lbl_80536744;
extern void *lbl_80536748;
extern void *lbl_8053674C;
extern void *lbl_80536750;
}
extern "C" {
void *fn_803B17CC(){return lbl_80536728;}
void *fn_803B17DC(){return lbl_80536730;}
void *fn_803B17EC(){return lbl_80536734;}
void *fn_803B17FC(){return lbl_8053673C;}
void *fn_803B180C(){return lbl_80536744;}
void *fn_803B181C(){return lbl_80536748;}
void *fn_803B182C(){return lbl_8053674C;}
void *fn_803B183C(){return lbl_80536750;}
void fn_803B184C(int p0){
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
