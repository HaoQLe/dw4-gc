#include <unknownGen.h>
#include <meta/beSaveMemoryObj.h>
#include <meta/beSvFormatApi.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800667B4(void *);
}
extern "C" {
void beSvFormatApi_virtual28(int p0){
 void *value0;
 void *value1;
 void *value2;
 void *value3;
 value0=reinterpret_cast<Meta::beSvFormatApi *>((void *)p0)->_imageWork;
 if(value0){
  if(value0){
   value1=(void *)reinterpret_cast<Meta::beSaveMemoryObj *>(value0)->_refCount;
   reinterpret_cast<Meta::beSaveMemoryObj *>(value0)->_refCount=(unsigned int)(reinterpret_cast<char *>(value1)+-1);
   if(!((unsigned int)(int)(void *)reinterpret_cast<Meta::beSaveMemoryObj *>(value0)->_refCount&0x7FFFFF)){
    fn_80066E1C(value0);
   }
  }
  reinterpret_cast<Meta::beSvFormatApi *>((void *)p0)->_imageWork=(Meta::beSaveMemoryObj *)0;
 }
 value2=reinterpret_cast<Meta::beSvFormatApi *>((void *)p0)->_mountWork;
 if(value2){
  if(value2){
   value3=(void *)reinterpret_cast<Meta::beSaveMemoryObj *>(value2)->_refCount;
   reinterpret_cast<Meta::beSaveMemoryObj *>(value2)->_refCount=(unsigned int)(reinterpret_cast<char *>(value3)+-1);
   if(!((unsigned int)(int)(void *)reinterpret_cast<Meta::beSaveMemoryObj *>(value2)->_refCount&0x7FFFFF)){
    fn_80066E1C(value2);
   }
  }
  reinterpret_cast<Meta::beSvFormatApi *>((void *)p0)->_mountWork=(Meta::beSaveMemoryObj *)0;
 }
 fn_800667B4((void *)p0);
}
}
#pragma pop
