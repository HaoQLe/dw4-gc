#include <unknownGen.h>
#include <meta/igCommonTraversal.h>
#include <meta/igTraversalFunctionList.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igCommonTraversal_virtual24(void *,void *);
extern void *lbl_805656E8;
}
extern "C" {
void fn_801DF36C(int p0,int p1){
 void *value1;
 void *value2;
 void *value3;
 igCommonTraversal_virtual24((void *)p0,(void *)p1);
 if(!(unsigned char)p1){
  void *value0=lbl_805656E8;
  if(value0){
   value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+4)=(reinterpret_cast<char *>(value1)+1);
  }
  value2=reinterpret_cast<Meta::igCommonTraversal *>((void *)p0)->_travProcs;
  if(value2){
   value3=(void *)reinterpret_cast<Meta::igTraversalFunctionList *>(value2)->_refCount;
   reinterpret_cast<Meta::igTraversalFunctionList *>(value2)->_refCount=(unsigned int)(reinterpret_cast<char *>(value3)+-1);
   if(!((unsigned int)(int)(void *)reinterpret_cast<Meta::igTraversalFunctionList *>(value2)->_refCount&0x7FFFFF)){
    fn_80066E1C(value2);
   }
  }
  reinterpret_cast<Meta::igCommonTraversal *>((void *)p0)->_travProcs=(Meta::igTraversalFunctionList *)value0;
  return;
 } else {
  return;
 }
}
}
#pragma pop
