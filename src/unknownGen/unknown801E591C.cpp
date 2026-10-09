#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_801E5CBC(void *,void *,void *);
extern void *lbl_805657AC;
extern void *lbl_805657B0;
}
extern "C" {
void igEnbayaAnimationState_virtual60(int p0){
 if(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+160)){
  fn_801E5CBC(lbl_805657AC,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+160),*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8))+20))+8));
  return;
 } else {
  return;
 }
}
void *igEnbayaAnimationState_virtual64(int p0){
 lbl_805657B0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+160);
 return (void *)p0;
}
void igEnbayaAnimationState_virtual68(){
 lbl_805657B0=(void *)0;
}
}
#pragma pop
