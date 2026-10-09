#include <unknownGen.h>
#include <meta/beNDMWLoadCtrl2.h>
#include <meta/bePadManager.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8028A730(void *,void *);
extern char lbl_80534AAC[];
}
extern "C" {
void beNDMWLoadCtrl2_virtual88(int p0){
 void *value3;
 void *value0;
 void *value1;
 void *value2;
 if(!reinterpret_cast<Meta::beNDMWLoadCtrl2 *>((void *)p0)->_padManager){
  value3=fn_8028A730(reinterpret_cast<Meta::beNDMWLoadCtrl2 *>((void *)p0)->_insight,*reinterpret_cast<void **>((lbl_80534AAC+0)));
  if((int)(int)value3!=0){
   value0=*reinterpret_cast<void **>(reinterpret_cast<char *>(value3)+4);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(value3)+4)=(reinterpret_cast<char *>(value0)+1);
  }
  value1=reinterpret_cast<Meta::beNDMWLoadCtrl2 *>((void *)p0)->_padManager;
  if(value1){
   value2=(void *)reinterpret_cast<Meta::bePadManager *>(value1)->_refCount;
   reinterpret_cast<Meta::bePadManager *>(value1)->_refCount=(unsigned int)(reinterpret_cast<char *>(value2)+-1);
   if(!((unsigned int)(int)(void *)reinterpret_cast<Meta::bePadManager *>(value1)->_refCount&0x7FFFFF)){
    fn_80066E1C(value1);
   }
  }
  reinterpret_cast<Meta::beNDMWLoadCtrl2 *>((void *)p0)->_padManager=(Meta::bePadManager *)value3;
  return;
 } else {
  return;
 }
}
}
#pragma pop
