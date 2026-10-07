#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80060748(void *);
extern char lbl_80471BDC[];
void memset(void *,int,int);
}
class UnknownGenV8005AFAC_0 {
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
 virtual void s8C();
 virtual void s90();
 virtual void s94();
 virtual void s98();
 virtual void s9C();
 virtual void sA0();
 virtual void sA4();
 virtual void sA8();
 virtual void sAC();
 virtual void sB0();
 virtual void sB4();
};
extern "C" {
void *fn_8005AFAC(int p0,int p1){
 void *value0;
 void *value1;
 if((int)p0!=0){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=lbl_80471BDC;
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+4)=(void *)0;
  memset((reinterpret_cast<char *>((void *)p0)+20),0,6624);
  reinterpret_cast<UnknownGenV8005AFAC_0 *>((void *)p0)->sB4();
  if((int)(p0+16)!=0){
   value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16);
   if(value0){
    value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+4)=(reinterpret_cast<char *>(value1)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4)&0x7FFFFF)){
     fn_80066E1C(value0);
    }
   }
  }
  if((int)(short)p1>0){
   fn_80060748((void *)p0);
  }
 }
 return (void *)p0;
}
}
#pragma pop
