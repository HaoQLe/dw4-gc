#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
class UnknownGenV80203360_0 {
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
 virtual void * s74(void *,void *);
};
extern "C" {
void *fn_80203360(int p0,int p1,int p2){
 void *value0;
 void *value1;
 void *local0;
 local0=(void *)0;
 value0=(void *)0;
 do {
  value1=reinterpret_cast<UnknownGenV80203360_0 *>((void *)p0)->s74((void *)p1,&local0);
  if(((int)(int)value1!=-1&&(int)(int)value0==(int)p2)){
   return value1;
  }
  value0=(reinterpret_cast<char *>(value0)+1);
 } while((int)(int)value1!=-1);
 return (void *)-1;
}
}
#pragma pop
