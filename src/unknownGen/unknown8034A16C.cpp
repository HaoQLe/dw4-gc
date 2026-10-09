#include <unknownGen.h>
#include <meta/beNDMWPanelWaza.h>
#include <meta/bePadManager.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8028A730(void *,void *);
extern char lbl_80534AAC[];
}
extern "C" {
void beNDMWPanelWaza_virtual88(int p0){
 void *value0;
 if(!reinterpret_cast<Meta::beNDMWPanelWaza *>((void *)p0)->_padManager){
  value0=fn_8028A730(reinterpret_cast<Meta::beNDMWPanelWaza *>((void *)p0)->_insight,*reinterpret_cast<void **>((lbl_80534AAC+0)));
  reinterpret_cast<Meta::beNDMWPanelWaza *>((void *)p0)->_padManager=(Meta::bePadManager *)value0;
  return;
 } else {
  return;
 }
}
}
#pragma pop
