#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igNode_virtual28(void *);
}
class UnknownGenV801EAD50_0 {
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
 virtual void s74();
 virtual void s78();
 virtual void s7C();
 virtual void s80();
 virtual void s84();
 virtual void s88(void *);
};
extern "C" {
void fn_801EAD50(int p0){
 void *value0;
 void *value1;
 if(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+28)){
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+28))+8);
 } else {
  value0=(void *)0;
 }
 value1=(void *)0;
 while((unsigned int)(int)value1<(unsigned int)(int)value0){
  reinterpret_cast<UnknownGenV801EAD50_0 *>((void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+28))+16))+((int)value1<<2)))->s88((void *)p0);
  value1=(reinterpret_cast<char *>(value1)+1);
 }
 igNode_virtual28((void *)p0);
}
}
#pragma pop
