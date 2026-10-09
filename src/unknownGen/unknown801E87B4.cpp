#include <unknownGen.h>
#include <meta/igCommonTraversal.h>
#include <meta/igTraversalFunctionList.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igCommonTraversal_virtual24(void *,void *);
void igCommonTraversal_virtual7C(void *);
extern void *lbl_805657D0;
}
class UnknownGenV801E87EC_0 {
public:
 virtual void s08();
 virtual void s0C();
 virtual void s10();
 virtual void s14();
 virtual void s18();
 virtual void s1C();
 virtual void s20();
 virtual void s24();
 virtual void s28();
 virtual void s2C();
 virtual void s30();
 virtual void s34();
 virtual void s38();
 virtual void s3C();
 virtual void s40();
 virtual void s44();
 virtual void s48();
 virtual void s4C();
 virtual void s50();
 virtual void s54();
 virtual void s58();
 virtual void s5C();
 virtual void s60();
 virtual void s64();
 virtual void s68();
 virtual void s6C();
 virtual void s70();
 virtual void s74();
 virtual void s78();
 virtual void s7C();
 virtual void s80(void *);
};
extern "C" {
void fn_801E87B4(int p0){
 igCommonTraversal_virtual7C((void *)p0);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+540)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+544)=(void *)0;
}
void fn_801E87EC(int p0,int p1){
 void *value1;
 void *value2;
 void *value3;
 igCommonTraversal_virtual24((void *)p0,(void *)p1);
 if(!(unsigned char)p1){
  void *value0=lbl_805657D0;
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
  reinterpret_cast<Meta::igCommonTraversal *>((void *)p0)->_modeMask=(int)(void *)(int)((int)(void *)reinterpret_cast<Meta::igCommonTraversal *>((void *)p0)->_modeMask|0x200);
  reinterpret_cast<UnknownGenV801E87EC_0 *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+548))->s80((void *)0);
  return;
 } else {
  return;
 }
}
}
#pragma pop
