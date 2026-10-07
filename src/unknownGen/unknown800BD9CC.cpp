#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800667D0();
void fn_800BCB74(void *);
void fn_800ED530(void *,int);
void *fn_8012E1D8(void *,int);
}
class UnknownGenV800BDA78_0 {
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
 virtual void s8C();
 virtual void s90();
 virtual void s94();
 virtual void s98();
 virtual void s9C();
 virtual void sA0();
 virtual void sA4();
 virtual void sA8();
 virtual void sAC();
 virtual void sB0();
 virtual void sB4();
 virtual void sB8();
 virtual void sBC();
 virtual void sC0();
 virtual void sC4();
 virtual void sC8();
 virtual void sCC();
 virtual void sD0();
 virtual void sD4();
 virtual void sD8();
 virtual void sDC();
 virtual void sE0();
 virtual void sE4();
 virtual void sE8();
 virtual void sEC();
 virtual void sF0();
 virtual void sF4();
 virtual void sF8();
 virtual void sFC();
 virtual void s100();
 virtual void s104();
 virtual void s108();
 virtual void s10C();
 virtual void * s110(void *);
};
extern "C" {
void fn_800BD9CC(void *object,unsigned char value){*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(object)+12)=value;}
void fn_800BD9D4(int p0){
 fn_800667D0();
 void *value0=fn_8012E1D8((reinterpret_cast<char *>((void *)p0)+12),1);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+28)=value0;
}
void fn_800BDA10(int p0){
 fn_800BCB74((void *)p0);
 void *value0=fn_8012E1D8((reinterpret_cast<char *>((void *)p0)+12),1);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+28)=value0;
}
void fn_800BDA4C(int p0,int p1){
 fn_800ED530((void *)p1,(int)(int)(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+28)));
}
void fn_800BDA78(int p0,int p1){
 void *value0=reinterpret_cast<UnknownGenV800BDA78_0 *>((void *)p1)->s110((void *)p1);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+28)=value0;
}
void fn_800BDAB8(int p0){
 void *value0=fn_8012E1D8((reinterpret_cast<char *>((void *)p0)+12),1);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+28)=value0;
}
}
#pragma pop
