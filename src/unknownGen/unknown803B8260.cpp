#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_803B8358(void *);
void fn_803B84C0(void *);
extern char lbl_804EEB78[];
extern void *lbl_805661F0;
}
class UnknownGenV803B82B8_0 {
public:
 virtual void s08(void *);
};
class UnknownGenV803B82B8_1 {
public:
 virtual void s08();
 virtual void s0C();
 virtual void s10(void *);
};
extern "C" {
void *fn_803B8260(void *p0){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(p0)+0)=lbl_804EEB78;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(p0)+4)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(p0)+8)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(p0)+12)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(p0)+16)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(p0)+20)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(p0)+24)=(void *)0;
 fn_803B84C0(p0);
 return p0;
}
void *fn_803B82B8(void *p0,int p1){
 void *value0;
 if((int)(int)p0!=0){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(p0)+0)=lbl_804EEB78;
  fn_803B8358(p0);
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>(p0)+24);
  if(value0){
   if(value0){
    if(value0){
     reinterpret_cast<UnknownGenV803B82B8_0 *>(value0)->s08((void *)1);
    }
   }
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(p0)+24)=(void *)0;
  }
  if((int)(short)p1>0){
   reinterpret_cast<UnknownGenV803B82B8_1 *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(lbl_805661F0)+0))->s10(p0);
  }
 }
 return p0;
}
}
#pragma pop
