#include <unknownGen.h>
#include <meta/beCameraCtrl.h>
#include <meta/beCameraMode.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8040E5E8(void *);
}
extern "C" {
void beCameraCtrl_virtual88(int p0){
 void *value0;
 void *value1;
 void *value2;
 reinterpret_cast<Meta::beCameraCtrl *>((void *)p0)->_cameraNow=(int)0;
 reinterpret_cast<Meta::beCameraCtrl *>((void *)p0)->_cameraOld=(int)0;
 value0=reinterpret_cast<Meta::beCameraCtrl *>((void *)p0)->_viewerMang;
 if(value0){
  fn_8040E5E8(value0);
 }
 value1=reinterpret_cast<Meta::beCameraCtrl *>((void *)p0)->_cameraMode;
 if(value1){
  value2=(void *)reinterpret_cast<Meta::beCameraMode *>(value1)->_refCount;
  reinterpret_cast<Meta::beCameraMode *>(value1)->_refCount=(unsigned int)(reinterpret_cast<char *>(value2)+-1);
  if(!((unsigned int)(int)(void *)reinterpret_cast<Meta::beCameraMode *>(value1)->_refCount&0x7FFFFF)){
   fn_80066E1C(value1);
  }
 }
 reinterpret_cast<Meta::beCameraCtrl *>((void *)p0)->_cameraMode=(Meta::beCameraMode *)0;
}
}
#pragma pop
