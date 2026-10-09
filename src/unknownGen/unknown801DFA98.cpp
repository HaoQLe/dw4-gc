#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_801DBD60(void *);
void fn_80203E48(void *,void *);
void igTraversal_virtual60(void *,void *);
}
class UnknownGenV801DFA98_0 {
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
};
extern "C" {
void fn_801DFA98(int p0,int p1){
 fn_801DBD60((void *)p0);
 fn_80203E48(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+68),*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+52));
 if(*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+24)){
  reinterpret_cast<UnknownGenV801DFA98_0 *>((void *)p0)->s84();
 }
 igTraversal_virtual60((void *)p0,(void *)p1);
}
}
#pragma pop
