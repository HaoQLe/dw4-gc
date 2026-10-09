#include <unknownGen.h>
#include <meta/beMessenger.h>
#include <meta/beStaticInfoCtl.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8028A730(void *,void *);
extern char lbl_80534FBC[];
}
extern "C" {
void beStaticInfoCtl_virtual88(int p0){
 void *value0;
 if(!reinterpret_cast<Meta::beStaticInfoCtl *>((void *)p0)->_messenger){
  value0=fn_8028A730(reinterpret_cast<Meta::beStaticInfoCtl *>((void *)p0)->_insight,*reinterpret_cast<void **>((lbl_80534FBC+0)));
  reinterpret_cast<Meta::beStaticInfoCtl *>((void *)p0)->_messenger=(Meta::beMessenger *)value0;
  return;
 } else {
  return;
 }
}
}
#pragma pop
