#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void fn_80272110(void *,void *,void *);
void *fn_802728B8(void *);
void fn_80272A90(void *);
extern void *lbl_805622F8;
}
class UnknownGenV802720BC_0 {
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
 virtual void * s5C(void *);
};
extern "C" {
void *fn_80272004(int p0,int p1,int p2,int p3){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=(void *)(int)(p1^p2);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+4)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+8)=(void *)0;
 fn_802728B8((void *)p0);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+12)=(void *)p2;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+16)=(void *)p3;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+20)=(void *)p1;
 return (void *)p0;
}
void *fn_80272068(int p0,int p1){
 if((int)p0!=0){
  if((int)p0!=0){
   fn_80272A90((void *)p0);
  }
  if((int)(short)p1>0){
   __dl__FPv((void *)p0);
  }
 }
 return (void *)p0;
}
void fn_802720BC(int p0,int p1){
 void *value0=reinterpret_cast<UnknownGenV802720BC_0 *>(lbl_805622F8)->s5C((void *)p1);
 fn_80272110(value0,(void *)p0,(void *)p1);
}
}
#pragma pop
