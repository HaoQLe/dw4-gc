#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void *fn_80065D88(void *);
}
class UnknownGenV80167F94_0 {
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
class UnknownGenV80167F94_1 {
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
extern "C" {
void fn_80167F94(int p0,int p1,int p2){
 void *value0;
 void *value1;
 void *value2;
 void *value3;
 void *value4;
 void *value5;
 void *value6;
 value1=reinterpret_cast<void * (*)(void *,void *,void *)>((void *)p1)((void *)p0,(void *)0,(void *)p2);
 if((int)(int)value1==0){
  value2=reinterpret_cast<UnknownGenV80167F94_0 *>((void *)p0)->s58();
  value3=fn_80065D88(value2);
  value0=(void *)0;
  while((int)(int)value0<(int)(int)value3){
   value4=reinterpret_cast<UnknownGenV80167F94_1 *>((void *)p0)->s58();
   value5=fn_800658E4(value4,value0);
   value6=reinterpret_cast<void * (*)(void *,void *,void *)>((void *)p1)((void *)p0,value5,(void *)p2);
   if((int)(int)value6==1){
    break;
   }
   value0=(reinterpret_cast<char *>(value0)+1);
  }
  return;
 } else {
  return;
 }
}
}
#pragma pop
