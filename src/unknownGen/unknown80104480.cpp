#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80068390(void *,void *);
void *fn_800DA440();
void *fn_800DDE54();
void png_destroy_info_struct(void *,void *);
void png_destroy_read_struct(void *,void *,void *);
void png_destroy_write_struct(void *,void *);
}
class UnknownGenV801044C0_0 {
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
};
extern "C" {
void *fn_80104480(){return fn_800DDE54();}
void *fn_801044A0(){return fn_800DA440();}
void *fn_801044C0(int p0,int p1,int p2,int p3,int p4,int p5,int p6,int p7){
 void *value0;
 void *value1;
 void *value2;
 void *value3;
 void *value4;
 void *local2;
 void *local1;
 void *local0;
 local0=(void *)p1;
 local1=(void *)p2;
 local2=(void *)p3;
 if((unsigned int)p4!=0){
  fn_80068390((void *)p0,(void *)p4);
 }
 if((unsigned int)p5!=0){
  fn_80068390((void *)p0,(void *)p5);
 }
 if(local0){
  if((unsigned char)p7){
   png_destroy_read_struct(&local0,&local1,&local2);
  } else {
   png_destroy_info_struct(local0,&local2);
   png_destroy_write_struct(&local0,&local1);
  }
 }
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+92);
 if(value0){
  reinterpret_cast<UnknownGenV801044C0_0 *>(value0)->s68();
  value1=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+92);
  value2=*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value1)+4)=(reinterpret_cast<char *>(value2)+-1);
  if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+4)&0x7FFFFF)){
   fn_80066E1C(value1);
  }
 }
 value3=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+92);
 if(value3){
  value4=*reinterpret_cast<void **>(reinterpret_cast<char *>(value3)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value3)+4)=(reinterpret_cast<char *>(value4)+-1);
  if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value3)+4)&0x7FFFFF)){
   fn_80066E1C(value3);
  }
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+92)=(void *)0;
 return (void *)p6;
}
}
#pragma pop
