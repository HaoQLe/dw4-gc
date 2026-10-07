#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8028A730(void *,void *);
void fn_803050A8(void *,void *,void *,int,int);
extern char lbl_80426DC0[];
extern char lbl_80534774[];
}
extern "C" {
void fn_80313040(int p0){
 void *value0;
 if(!*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+32)){
  value0=fn_8028A730(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),*reinterpret_cast<void **>((lbl_80534774+0)));
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+32)=value0;
  return;
 } else {
  return;
 }
}
void fn_8031308C(int p0,int p1,int p2,int p3,int p4,int p5){
 fn_803050A8(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20),(void *)p1,lbl_80426DC0,0,-1);
}
}
#pragma pop
