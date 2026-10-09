#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80065704(void *,int);
void fn_800667B0();
void fn_803225EC(void *,void *);
void fn_803225FC(void *);
void fn_80322688(void *,void *);
}
class UnknownGenV8032331C_0 {
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
class UnknownGenV80323364_1 {
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
 virtual void s5C(void *);
};
extern "C" {
void beSaveMemoryObj_virtual24(int p0){
 fn_800667B0();
 void *value0=reinterpret_cast<UnknownGenV8032331C_0 *>((void *)p0)->s58();
 fn_80065704(value0,1);
}
void *fn_80323364(int p0,int p1,int p2){
 void *value5;
 void *value0;
 void *value1;
 void *value2;
 void *value3;
 void *value4;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+32);
 value5=(void *)0;
 if(!value0){
  if((unsigned int)p2!=0){
   value1=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p2)+4);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p2)+4)=(reinterpret_cast<char *>(value1)+1);
  }
  value2=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+32);
  if(value2){
   value3=*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+4);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+4)=(reinterpret_cast<char *>(value3)+-1);
   if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+4)&0x7FFFFF)){
    fn_80066E1C(value2);
   }
  }
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+32)=(void *)p2;
  reinterpret_cast<UnknownGenV80323364_1 *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+32))->s5C(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+48));
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+48))+28)=*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+32))+12);
  value4=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+48);
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+44)=0;
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+24)=(void *)1;
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+36)=(void *)0;
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+32)=(void *)0;
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+28)=(void *)0;
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+28)=(void *)1;
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+36)=(void *)0;
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+32)=(void *)0;
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+32)=(void *)1;
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+36)=(void *)0;
  value5=(void *)1;
 }
 return value5;
}
void fn_80323454(int p0,int p1){
 fn_803225EC(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+36),*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+48));
 fn_803225FC(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+36));
 fn_80322688(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+36),*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+48));
}
}
#pragma pop
