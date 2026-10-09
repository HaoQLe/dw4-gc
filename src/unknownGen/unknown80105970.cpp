#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800667D4();
void fn_80068390(void *,void *);
}
class UnknownGenV80105998_0 {
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
 virtual void s68(void *);
};
class UnknownGenV80105A60_1 {
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
extern "C" {
int igFileImagePng_virtualB4(){return 1;}
void igTgaLoader_virtual30(){return fn_800667D4();}
void *fn_80105998(int p0,int p1){
 void *value0;
 void *value1;
 void *value2;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8);
 if(value0){
  reinterpret_cast<UnknownGenV80105998_0 *>(value0)->s68((void *)p1);
  value1=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8);
  if(value1){
   value2=*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+4);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(value1)+4)=(reinterpret_cast<char *>(value2)+-1);
   if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+4)&0x7FFFFF)){
    fn_80066E1C(value1);
   }
  }
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+8)=(void *)0;
 }
 fn_80068390((void *)p0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12));
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+12)=(void *)0;
 fn_80068390((void *)p0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16));
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+16)=(void *)0;
 fn_80068390((void *)p0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20));
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+20)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+24)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+28)=(void *)0;
 return (void *)p1;
}
void *fn_80105A60(int p0){
 void *value0;
 value0=reinterpret_cast<UnknownGenV80105A60_1 *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8))->s6C(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20),(void *)1,(void *)1024);
 if((int)(int)value0==0){
  return (void *)0;
 } else {
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+40)=value0;
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+36)=(void *)0;
  return (void *)1;
 }
}
}
#pragma pop
