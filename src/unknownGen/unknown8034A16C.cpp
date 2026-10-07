#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8028A730(void *,void *);
void fn_803050A8(void *,void *,void *,int,void *);
extern char lbl_80456970[];
extern char lbl_80534AAC[];
extern void *lbl_80536098;
}
extern "C" {
void fn_8034A16C(int p0){
 void *value0;
 if(!*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+32)){
  value0=fn_8028A730(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),*reinterpret_cast<void **>((lbl_80534AAC+0)));
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+32)=value0;
  return;
 } else {
  return;
 }
}
void *fn_8034A1B8(){return lbl_80536098;}
void fn_8034A1C8(int p0,int p1){
 fn_803050A8(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20),(void *)p1,lbl_80456970,0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+8));
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p1)+20)=0;
}
}
#pragma pop
