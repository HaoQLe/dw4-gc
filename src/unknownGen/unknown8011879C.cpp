#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
class UnknownGenV8011879C_0 {
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
 virtual void * s64(void *,void *);
};
extern "C" {
void fn_8011879C(int p0,int p1,int p2,int p3){
 void *value0;
 void *value1;
 void *value2;
 void *value4;
 void *value3;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12);
 value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+8);
 value2=*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+8);
 value3=(void *)0;
 while((int)(int)value3<(int)(int)value2){
  value4=reinterpret_cast<UnknownGenV8011879C_0 *>((void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12))+8))+16))+((int)value3<<2)))->s64((void *)p3,(void *)1);
  if((unsigned char)(int)value4){
   break;
  }
  value3=(reinterpret_cast<char *>(value3)+1);
 }
}
}
#pragma pop
