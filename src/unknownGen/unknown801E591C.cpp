#include <unknownGen.h>
#include <meta/igAnimation.h>
#include <meta/igAnimationTrackList.h>
#include <meta/igEnbayaAnimationState.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_801E5CBC(void *,void *,void *);
extern void *lbl_805657AC;
extern void *lbl_805657B0;
}
extern "C" {
void igEnbayaAnimationState_virtual60(int p0){
 if(reinterpret_cast<Meta::igEnbayaAnimationState *>((void *)p0)->_context){
  fn_801E5CBC(lbl_805657AC,reinterpret_cast<Meta::igEnbayaAnimationState *>((void *)p0)->_context,(void *)reinterpret_cast<Meta::igAnimationTrackList *>(reinterpret_cast<Meta::igAnimation *>(reinterpret_cast<Meta::igEnbayaAnimationState *>((void *)p0)->_animation)->_trackList)->_count);
  return;
 } else {
  return;
 }
}
void *igEnbayaAnimationState_virtual64(int p0){
 lbl_805657B0=reinterpret_cast<Meta::igEnbayaAnimationState *>((void *)p0)->_context;
 return (void *)p0;
}
void igEnbayaAnimationState_virtual68(){
 lbl_805657B0=(void *)0;
}
}
#pragma pop
