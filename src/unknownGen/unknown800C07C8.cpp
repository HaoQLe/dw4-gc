#include <unknownGen.h>
#include <meta/igGeometrySetAttr.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800C0538(void *);
}
extern "C" {
void igGeometrySetAttr_virtual74(int p0){
 if((int)(int)(void *)(int)reinterpret_cast<Meta::igGeometrySetAttr *>((void *)p0)->_renderListState!=0){
  if((int)(int)(void *)reinterpret_cast<Meta::igGeometrySetAttr *>((void *)p0)->_renderListHandle==-1){
   fn_800C0538((void *)p0);
   return;
  } else {
   return;
  }
 }
}
}
#pragma pop
