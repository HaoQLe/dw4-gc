#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8004155C(void *,void *,int);
void fn_80041660(void *,int,int);
void fn_800740F4(void *,int);
void fn_800740FC(void *,int);
void fn_80074104(void *);
void fn_80074160(void *);
}
class UnknownGenV800541D8_0 {
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
 virtual void s80(void *);
};
extern "C" {
void fn_800541C8(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+8)=value;}
void fn_800541D0(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+12)=value;}
void fn_800541D8(int p0){
 void *value0;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16);
 if((int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8)*5)>=(int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+8)){
  fn_8004155C(value0,(void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8)*5),4);
 }
 reinterpret_cast<UnknownGenV800541D8_0 *>((void *)p0)->s80(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12));
 fn_800740F4(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24),(int)(int)((void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8)<<2)));
 fn_800740FC(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24),(int)(int)(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8)));
 fn_80074104(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24));
 fn_800740F4(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+28),4096);
 fn_800740FC(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+28),256);
 fn_80074104(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+28));
}
void fn_8005427C(int p0){
 void *value0;
 void *value1;
 void *value2;
 void *value3;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16);
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+12)>=0){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+8)=(void *)0;
 } else {
  fn_80041660(value0,0,4);
 }
 value1=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16);
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+8)<=0){
  fn_8004155C(value1,(void *)0,4);
 }
 value2=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20);
 if(value2){
  if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+12)>=0){
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+8)=(void *)0;
  } else {
   fn_80041660(value2,0,4);
  }
  value3=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20);
  if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value3)+8)<=0){
   fn_8004155C(value3,(void *)0,4);
  }
 }
 fn_80074160(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24));
 fn_80074160(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+28));
}
}
#pragma pop
