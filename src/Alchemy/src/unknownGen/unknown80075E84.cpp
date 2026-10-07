#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006388C(void *);
void fn_80075F0C(void *);
extern char lbl_80477054[];
}
class UnknownGenV80075E8C_0 {
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
 virtual void s88();
 virtual void s8C(void *);
};
struct UnknownGenL80075E8C_8 {
 short m08;
};
extern "C" {
int fn_80075E84(){return 2;}
void fn_80075E8C(int p0,int p1){
 UnknownGenL80075E8C_8 local0;
 local0.m08=(short)p1;
 reinterpret_cast<UnknownGenV80075E8C_0 *>((void *)p0)->s8C(&local0);
}
void *fn_80075EC0(int p0){
 fn_8006388C((void *)p0);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=lbl_80477054;
 if((unsigned int)p0!=0){
  fn_80075F0C((void *)p0);
 }
 return (void *)p0;
}
}
#pragma pop
