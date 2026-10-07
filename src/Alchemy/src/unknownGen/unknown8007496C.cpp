#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80053F28(void *);
void *fn_80054094(void *,void *);
void *fn_80054140(int);
void fn_80063E50(void *);
void fn_80064A04();
void fn_80064A08();
extern void *lbl_80562140;
void strlen(void *,void *);
}
class UnknownGenV80074B0C_0 {
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
};
extern "C" {
unsigned short fn_8007496C(void *object){return *reinterpret_cast<unsigned short *>(reinterpret_cast<char *>(object)+20);}
void fn_80074974(int p0,int p1,int p2,int p3,int p4,int p5){
 strlen((void *)p2,(void *)p1);
}
void *fn_80074998(int p0,int p1){
 void *value1;
 void *value2;
 void *value0;
 void *value3;
 void *value4;
 void *value5;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+12);
 if(!value0){
  value2=(void *)0;
 } else {
  if(!lbl_80562140){
   value3=fn_80054140(16);
   value1=value3;
   if((int)(int)value3!=0){
    value4=fn_80053F28(value3);
    value1=value4;
   }
   lbl_80562140=value1;
  }
  value5=fn_80054094(lbl_80562140,value0);
  value2=value5;
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=value2;
 return value2;
}
int fn_80074A14(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+52);}
void fn_80074A1C(int p0,int p1,int p2,int p3,int p4,int p5){
 if(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+56)){
  reinterpret_cast<void (*)(void *,void *,void *,void *,void *,void *)>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+56))((void *)(int)(p1+(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8)),(void *)p1,(void *)p2,(void *)p3,(void *)p4,(void *)p5);
  return;
 } else {
  fn_80064A04();
  return;
 }
}
void fn_80074A5C(int p0,int p1,int p2,int p3,int p4,int p5){
 if(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+60)){
  reinterpret_cast<void (*)(void *,void *,void *,void *,void *,void *)>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+60))((void *)(int)(p1+(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8)),(void *)p1,(void *)p2,(void *)p3,(void *)p4,(void *)p5);
  return;
 } else {
  fn_80064A08();
  return;
 }
}
void fn_80074A9C(int p0,int p1){
 if(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+56)){
  reinterpret_cast<void (*)(void *,void *)>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+60))((void *)(int)(p1+(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8)),(void *)p1);
  reinterpret_cast<void (*)(void *)>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+56))((void *)(int)(p1+(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8)));
  return;
 } else {
  fn_80063E50((void *)p0);
  return;
 }
}
void fn_80074B0C(int p0){
 reinterpret_cast<UnknownGenV80074B0C_0 *>((void *)p0)->s70();
}
}
#pragma pop
