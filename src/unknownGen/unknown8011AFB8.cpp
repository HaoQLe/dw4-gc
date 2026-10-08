#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8011BFA4(void *,void *);
void fn_801EADDC(void *,void *,int);
extern void *lbl_805636FC;
}
class UnknownGenV8011AFB8_0 {
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
 virtual void s80();
 virtual void s84();
 virtual void s88();
 virtual void s8C(void *,void *);
};
struct UnknownGenL8011AFB8_C {
 int m0C;
 int m10;
 int m14;
};
extern "C" {
void fn_8011AFB8(int p0,int p1){
 void *value8;
 void *value0;
 void *value1;
 void *value2;
 void *value3;
 void *value4;
 void *value5;
 void *value6;
 void *value7;
 UnknownGenL8011AFB8_C local1;
 void *local0;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12);
 value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+164);
 if(value1){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value1)+8)=(void *)0;
 }
 value2=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12);
 if((unsigned int)p1!=0){
  value3=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+4)=(reinterpret_cast<char *>(value3)+1);
 }
 value4=*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+164);
 if(value4){
  value5=*reinterpret_cast<void **>(reinterpret_cast<char *>(value4)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+4)=(reinterpret_cast<char *>(value5)+-1);
  if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value4)+4)&0x7FFFFF)){
   fn_80066E1C(value4);
  }
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+164)=(void *)p1;
 local1.m0C=(int)2;
 local1.m10=(int)0;
 local1.m14=(int)(int)lbl_805636FC;
 fn_8011BFA4(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),&local1);
 value6=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20);
 value7=*reinterpret_cast<void **>(reinterpret_cast<char *>(value6)+28);
 if(value7){
  value8=*reinterpret_cast<void **>(reinterpret_cast<char *>(value7)+8);
 } else {
  value8=(void *)0;
 }
 if((int)(int)value8>1){
  fn_801EADDC(&local0,value6,0);
  if(local0){
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(local0)+4)=(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(local0)+4))+-1);
   if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(local0)+4)&0x7FFFFF)){
    fn_80066E1C(local0);
   }
  }
 }
 if((unsigned int)p1!=0){
  reinterpret_cast<UnknownGenV8011AFB8_0 *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20))->s8C((void *)0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+28));
 }
 if((unsigned int)p1!=0){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+8)=(void *)p0;
 }
}
}
#pragma pop
