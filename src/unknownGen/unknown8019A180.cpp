#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_801EAC44(void *,void *);
void fn_801EADDC(void *,void *,int);
}
class UnknownGenV8019A180_0 {
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
 virtual void s80(void *,void *);
};
extern "C" {
void fn_8019A180(int p0,int p1,int p2){
 void *value0;
 void *value1;
 void *local0;
 if((unsigned char)p0){
  reinterpret_cast<UnknownGenV8019A180_0 *>((void *)p1)->s80((void *)p2,(void *)p2);
  return;
 } else {
  if(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+28)){
   value0=*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+28))+8);
  } else {
   value0=(void *)0;
  }
  value1=value0;
  while((int)(int)value1>0){
   fn_801EAC44((void *)p2,*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+28))+16))+0));
   fn_801EADDC(&local0,(void *)p1,0);
   if(local0){
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(local0)+4)=(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(local0)+4))+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(local0)+4)&0x7FFFFF)){
     fn_80066E1C(local0);
    }
   }
   value1=(reinterpret_cast<char *>(value1)+-1);
  }
  fn_801EAC44((void *)p1,(void *)p2);
  return;
 }
}
}
#pragma pop
