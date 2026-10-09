#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658F8(void *,void *);
void igPointSpriteExt_virtual74(void *,void *);
extern char lbl_80488C14[];
extern char lbl_80488C20[];
extern char lbl_8048D338[];
}
class UnknownGenV800F98CC_0 {
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
class UnknownGenV800F98CC_1 {
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
class UnknownGenV800F98CC_2 {
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
void igGamecubePointSpriteExt_virtual74(int p0,int p1){
 void *value9;
 void *value10;
 void *value0;
 void *value1;
 void *value2;
 void *value11;
 void *value12;
 void *value3;
 void *value4;
 void *value5;
 void *value13;
 void *value14;
 void *value6;
 void *value7;
 void *value8;
 igPointSpriteExt_virtual74((void *)p0,(void *)p1);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+392)=(void *)p1;
 value9=reinterpret_cast<UnknownGenV800F98CC_0 *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+392))->s58();
 value10=fn_800658F8(value9,lbl_80488C20);
 if((int)(int)value10!=0){
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>(value10)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value10)+4)=(reinterpret_cast<char *>(value0)+1);
 }
 value1=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+396);
 if(value1){
  value2=*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value1)+4)=(reinterpret_cast<char *>(value2)+-1);
  if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+4)&0x7FFFFF)){
   fn_80066E1C(value1);
  }
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+396)=value10;
 value11=reinterpret_cast<UnknownGenV800F98CC_1 *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+392))->s58();
 value12=fn_800658F8(value11,lbl_8048D338);
 if((int)(int)value12!=0){
  value3=*reinterpret_cast<void **>(reinterpret_cast<char *>(value12)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value12)+4)=(reinterpret_cast<char *>(value3)+1);
 }
 value4=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+400);
 if(value4){
  value5=*reinterpret_cast<void **>(reinterpret_cast<char *>(value4)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+4)=(reinterpret_cast<char *>(value5)+-1);
  if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value4)+4)&0x7FFFFF)){
   fn_80066E1C(value4);
  }
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+400)=value12;
 value13=reinterpret_cast<UnknownGenV800F98CC_2 *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+392))->s58();
 value14=fn_800658F8(value13,lbl_80488C14);
 if((int)(int)value14!=0){
  value6=*reinterpret_cast<void **>(reinterpret_cast<char *>(value14)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value14)+4)=(reinterpret_cast<char *>(value6)+1);
 }
 value7=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+404);
 if(value7){
  value8=*reinterpret_cast<void **>(reinterpret_cast<char *>(value7)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value7)+4)=(reinterpret_cast<char *>(value8)+-1);
  if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value7)+4)&0x7FFFFF)){
   fn_80066E1C(value7);
  }
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+404)=value14;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+412)=(void *)5;
}
}
#pragma pop
