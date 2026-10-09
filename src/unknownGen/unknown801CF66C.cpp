#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800681C4(void *,void *);
}
class UnknownGenV801CF66C_0 {
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
 virtual void * s60(void *);
};
extern "C" {
void *fn_801CF66C(int p0,int p1){
 void *value4;
 void *value0;
 void *value1;
 void *value2;
 void *value3;
 void *value5;
 value4=reinterpret_cast<UnknownGenV801CF66C_0 *>((void *)p1)->s60((void *)p1);
 if(((int)(int)value4==0||(value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8),value0))){
  return (void *)0;
 } else {
  if((unsigned int)p1!=0){
   value1=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+4);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+4)=(reinterpret_cast<char *>(value1)+1);
  }
  value2=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8);
  if((value2&&(value3=*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+4),*reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+4)=(reinterpret_cast<char *>(value3)+-1),!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+4)&0x7FFFFF)))){
   fn_80066E1C(value2);
  }
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+8)=(void *)p1;
  value5=fn_800681C4((void *)p0,(void *)(int)((int)value4<<2));
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+12)=value5;
  return (void *)1;
 }
}
}
#pragma pop
