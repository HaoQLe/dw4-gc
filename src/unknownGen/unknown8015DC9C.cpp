#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80053F28(void *);
void *fn_80054094(void *,void *);
void *fn_80054140(int);
void fn_800A325C(void *);
void *fn_80188328(void *,void *,void *,void *);
extern void *lbl_80562140;
extern void *lbl_80564490;
extern void *lbl_8056449C;
}
class UnknownGenV8015DD40_0 {
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
 virtual void * s58(void *);
};
extern "C" {
UnknownGenHolder *dtor_8015DC9C(UnknownGenHolder *object,short flags){
 if(object){
  UnknownGenValue *value=object->unknown00;
  if(value){
   --value->unknown04;
   if(!(reinterpret_cast<volatile unsigned int *>(value)[1]&0x7FFFFF)) fn_80066E1C(value);
  }
  if(flags>0) fn_800A325C(object);
 }
 return object;
}
void igCompareAttr_virtual70(int p0,int p1,int p2,int p3,int p4,int p5){
 void *local0;
 fn_80188328(&local0,(void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>(lbl_8056449C)+12),(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+40));
}
void *igCompareAttr_virtual88(int p0,int p1){
 void *value1;
 void *value2;
 void *value3;
 void *value0;
 void *value4;
 void *value5;
 void *value6;
 value3=reinterpret_cast<UnknownGenV8015DD40_0 *>((void *)p1)->s58((void *)p1);
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>(value3)+28);
 if(!value0){
  value2=(void *)0;
 } else {
  if(!lbl_80562140){
   value4=fn_80054140(16);
   value1=value4;
   if((int)(int)value4!=0){
    value5=fn_80053F28(value4);
    value1=value5;
   }
   lbl_80562140=value1;
  }
  value6=fn_80054094(lbl_80562140,value0);
  value2=value6;
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=value2;
 return value2;
}
void *igCompareAttr_virtual58(){return lbl_80564490;}
void *igCompareAttr_virtual74(int p0){
 void *value0;
 void *value1;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=(void *)0;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0);
 if(!value0){
  return (void *)p0;
 }
 value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+4)=(reinterpret_cast<char *>(value1)+1);
 return value1;
}
}
#pragma pop
