#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800667CC();
void fn_800667E0();
extern void *lbl_80562A68;
}
class UnknownGenV800BCB74_0 {
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
 virtual void * s58();
};
class UnknownGenV800BCBCC_1 {
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
 virtual void * s58();
};
extern "C" {
void fn_800BCB60(void *object,unsigned char value){*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(object)+12)=value;}
void fn_800BCB68(){}
void fn_800BCB6C(void *object,unsigned short value){*reinterpret_cast<unsigned short *>(reinterpret_cast<char *>(object)+10)=value;}
void fn_800BCB74(int p0){
 fn_800667E0();
 *reinterpret_cast<short *>(reinterpret_cast<char *>((void *)p0)+10)=0;
 void *value0=reinterpret_cast<UnknownGenV800BCB74_0 *>((void *)p0)->s58();
 *reinterpret_cast<short *>(reinterpret_cast<char *>((void *)p0)+8)=(short)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+8);
}
void *fn_800BCBC4(){return lbl_80562A68;}
void fn_800BCBCC(int p0,int p1){
 fn_800667CC();
 void *value0=reinterpret_cast<UnknownGenV800BCBCC_1 *>((void *)p0)->s58();
 *reinterpret_cast<short *>(reinterpret_cast<char *>((void *)p0)+8)=(short)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+8);
}
}
#pragma pop
