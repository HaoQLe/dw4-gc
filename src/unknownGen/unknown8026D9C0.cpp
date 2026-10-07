#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8026AD9C(void *,void *,void *,void *);
void fn_802727F4(void *,...);
extern char lbl_804C944C[];
extern char lbl_804C9628[];
}
class UnknownGenV8026D9C0_0 {
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
 virtual void * s58(void *,void *,void *,void *);
};
class UnknownGenV8026D9C0_1 {
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
 virtual void * s58();
};
extern "C" {
void fn_8026D9C0(int p0,int p1,int p2,int p3,int p4){
 void *value0;
 void *value1;
 void *value2;
 if((unsigned int)p1==0){
  value0=reinterpret_cast<UnknownGenV8026D9C0_0 *>((void *)p2)->s58((void *)p1,(void *)p2,(void *)p3,(void *)p4);
  fn_802727F4(lbl_804C9628,(void *)p3,*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+28));
 } else {
  value1=fn_8026AD9C((void *)p0,(void *)p1,(void *)p2,(void *)p4);
  if(!(unsigned char)(int)value1){
   value2=reinterpret_cast<UnknownGenV8026D9C0_1 *>((void *)p2)->s58();
   fn_802727F4(lbl_804C944C,(void *)p3,*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+28));
   return;
  } else {
   return;
  }
 }
}
}
#pragma pop
