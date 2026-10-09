#include <unknownGen.h>
#include <meta/igShaderFactory.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
class UnknownGenV80202504_0 {
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
 virtual void s68(void *);
};
extern "C" {
void *igShaderFactory_virtual60(int p0){
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
void igShaderFactory_virtual64(int p0,int p1){
 if((int)p1!=(int)(int)(void *)reinterpret_cast<Meta::igShaderFactory *>((void *)p0)->_fileCachingMode){
  reinterpret_cast<Meta::igShaderFactory *>((void *)p0)->_fileCachingMode=(int)(void *)p1;
  if((int)(int)(void *)reinterpret_cast<Meta::igShaderFactory *>((void *)p0)->_fileCachingMode==0){
   reinterpret_cast<UnknownGenV80202504_0 *>((void *)p0)->s68((void *)p1);
   return;
  } else {
   return;
  }
 }
}
void igShaderFactory_virtual68(){}
}
#pragma pop
