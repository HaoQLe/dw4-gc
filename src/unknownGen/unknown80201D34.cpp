#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_801FAE18(void *);
}
class UnknownGenV80201D34_0 {
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
};
extern "C" {
void igSimpleShader_virtual24(int p0){
 fn_801FAE18((void *)p0);
 reinterpret_cast<UnknownGenV80201D34_0 *>((void *)p0)->s7C();
}
unsigned char igSimpleShader_virtualA4(void *object){return *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(object)+32);}
void igSimpleShader_virtualA8(void *object,unsigned char value){*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(object)+34)=value;}
unsigned char igSimpleShader_virtualAC(void *object){return *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(object)+34);}
void *igSimpleShader_virtual7C(void *p0){
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(p0)+33)=0;
 return p0;
}
}
#pragma pop
