#include <unknownGen.h>
#include <meta/beTextureCtrl.h>
#include <meta/beTextureCtrlWork.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void beTextureCtrl_virtual88(int p0){
 void *value0;
 void *value1;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+32)=1;
 value0=reinterpret_cast<Meta::beTextureCtrl *>((void *)p0)->_work;
 if(value0){
  value1=(void *)reinterpret_cast<Meta::beTextureCtrlWork *>(value0)->_refCount;
  reinterpret_cast<Meta::beTextureCtrlWork *>(value0)->_refCount=(unsigned int)(reinterpret_cast<char *>(value1)+-1);
  if(!((unsigned int)(int)(void *)reinterpret_cast<Meta::beTextureCtrlWork *>(value0)->_refCount&0x7FFFFF)){
   fn_80066E1C(value0);
  }
 }
 reinterpret_cast<Meta::beTextureCtrl *>((void *)p0)->_work=(Meta::beTextureCtrlWork *)0;
}
}
#pragma pop
