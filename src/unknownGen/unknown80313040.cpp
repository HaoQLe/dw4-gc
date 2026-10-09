#include <unknownGen.h>
#include <meta/beSeCtl.h>
#include <meta/beSound.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8028A730(void *,void *);
void fn_803050A8(void *,void *,void *,int,int);
extern char lbl_80426DC0[];
extern char lbl_80534774[];
}
extern "C" {
void beSeCtl_virtual88(int p0){
 void *value0;
 if(!reinterpret_cast<Meta::beSeCtl *>((void *)p0)->_sndMng){
  value0=fn_8028A730(reinterpret_cast<Meta::beSeCtl *>((void *)p0)->_insight,*reinterpret_cast<void **>((lbl_80534774+0)));
  reinterpret_cast<Meta::beSeCtl *>((void *)p0)->_sndMng=(Meta::beSound *)value0;
  return;
 } else {
  return;
 }
}
void beSeCtl_virtual7C(int p0,int p1,int p2,int p3,int p4,int p5){
 fn_803050A8(reinterpret_cast<Meta::beSeCtl *>((void *)p0)->_messenger,(void *)p1,lbl_80426DC0,0,-1);
}
}
#pragma pop
