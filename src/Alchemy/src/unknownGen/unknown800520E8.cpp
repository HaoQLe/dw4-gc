#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80042B1C(void *,void *);
extern void *kFailure__3Gap;
extern void *kSuccess__3Gap;
extern void *lbl_80561AA4;
}
class UnknownGenV800520E8_0 {
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
 virtual void * s6C(void *,void *,void *);
};
class UnknownGenV800520E8_1 {
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
 virtual void sB8();
 virtual void sBC();
 virtual void sC0();
 virtual void sC4();
 virtual void sC8();
 virtual void sCC();
 virtual void sD0(void *,void *);
};
extern "C" {
void fn_800520E8(int p0,int p1){
 void *value4;
 void *value5;
 void *value0;
 void *value1;
 void *value2;
 void *value3;
 if(*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p1)+212)){
  value4=reinterpret_cast<UnknownGenV800520E8_0 *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+104))->s6C((void *)(int)(p1+(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(lbl_80561AA4)+8)),(void *)4,(void *)1);
  if((int)(int)value4!=1){
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kFailure__3Gap;
   return;
  }
  if(*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p1)+168)){
   reinterpret_cast<UnknownGenV800520E8_1 *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+204))->sD0((void *)(int)(p1+(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(lbl_80561AA4)+8)),(void *)1);
  }
  value5=fn_80042B1C((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+220));
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>(value5)+24);
  if(value0){
   value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+4)=(reinterpret_cast<char *>(value1)+1);
  }
  value2=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+28);
  if(value2){
   value3=*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+4);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+4)=(reinterpret_cast<char *>(value3)+-1);
   if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+4)&0x7FFFFF)){
    fn_80066E1C(value2);
   }
  }
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+28)=value0;
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kSuccess__3Gap;
}
}
#pragma pop
