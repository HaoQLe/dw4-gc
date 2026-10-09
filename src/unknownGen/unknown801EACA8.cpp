#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80041A44(void *,void *,int,void *);
void fn_801FAD60(void *,void *);
}
class UnknownGenV801EACA8_0 {
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
 virtual void * s84(void *,void *);
};
extern "C" {
void *fn_801EACA8(int p0,int p1,int p2){
 void *value2;
 void *value0;
 void *value1;
 void *local0;
 if((int)p2==0){
  return (void *)0;
 } else {
  value2=reinterpret_cast<UnknownGenV801EACA8_0 *>((void *)p2)->s84((void *)p0,(void *)p2);
  if((unsigned char)(int)value2){
   local0=(void *)p2;
   value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+28);
   if((unsigned int)p2!=0){
    value1=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p2)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p2)+4)=(reinterpret_cast<char *>(value1)+1);
   }
   fn_80041A44(value0,(void *)p1,1,&local0);
   fn_801FAD60((void *)p0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p2)+20));
   return (void *)1;
  } else {
   return (void *)0;
  }
 }
}
}
#pragma pop
