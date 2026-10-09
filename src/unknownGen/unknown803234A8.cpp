#include <unknownGen.h>
#include <meta/beSaveApi.h>
#include <meta/beSaveUtil.h>
#include <meta/beSvConnectCheck.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void beSaveUtil_virtual88(int p0){
 void *value0;
 void *value1;
 void *value2;
 void *value3;
 value0=reinterpret_cast<Meta::beSaveUtil *>((void *)p0)->_api;
 if(value0){
  if(value0){
   value1=(void *)reinterpret_cast<Meta::beSaveApi *>(value0)->_refCount;
   reinterpret_cast<Meta::beSaveApi *>(value0)->_refCount=(unsigned int)(reinterpret_cast<char *>(value1)+-1);
   if(!((unsigned int)(int)(void *)reinterpret_cast<Meta::beSaveApi *>(value0)->_refCount&0x7FFFFF)){
    fn_80066E1C(value0);
   }
  }
  reinterpret_cast<Meta::beSaveUtil *>((void *)p0)->_api=(Meta::beSaveApi *)0;
 }
 value2=reinterpret_cast<Meta::beSaveUtil *>((void *)p0)->_connectCheck;
 if(value2){
  if(value2){
   value3=(void *)reinterpret_cast<Meta::beSvConnectCheck *>(value2)->_refCount;
   reinterpret_cast<Meta::beSvConnectCheck *>(value2)->_refCount=(unsigned int)(reinterpret_cast<char *>(value3)+-1);
   if(!((unsigned int)(int)(void *)reinterpret_cast<Meta::beSvConnectCheck *>(value2)->_refCount&0x7FFFFF)){
    fn_80066E1C(value2);
   }
  }
  reinterpret_cast<Meta::beSaveUtil *>((void *)p0)->_connectCheck=(Meta::beSvConnectCheck *)0;
  return;
 } else {
  return;
 }
}
}
#pragma pop
