#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
class UnknownGenV800CD53C_0 {
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
 virtual void s60(void *,void *,void *);
};
extern "C" {
void *fn_800CD4BC(int p0,int p1){
 void *value0;
 void *value1;
 void *value2;
 if((int)p1!=0){
  if((int)p1!=0){
   value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+4);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+4)=(reinterpret_cast<char *>(value0)+1);
  }
  value1=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24);
  if(value1){
   value2=*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+4);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(value1)+4)=(reinterpret_cast<char *>(value2)+-1);
   if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+4)&0x7FFFFF)){
    fn_80066E1C(value1);
   }
  }
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+24)=(void *)p1;
  return (void *)1;
 } else {
  return (void *)0;
 }
}
void fn_800CD53C(int p0){
 reinterpret_cast<UnknownGenV800CD53C_0 *>((void *)p0)->s60(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+36),*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8),*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12));
}
}
#pragma pop
