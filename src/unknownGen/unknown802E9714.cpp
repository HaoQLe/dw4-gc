#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80065704(void *,int);
void fn_800667B0();
extern void *lbl_805349F8;
extern void *lbl_80534A04;
extern void *lbl_80534A50;
extern void *lbl_80534A5C;
extern void *lbl_80534A74;
extern void *lbl_80534A84;
extern void *lbl_80534A90;
extern void *lbl_80534AC4;
extern void *lbl_80534B24;
extern void *lbl_80534B38;
extern void *lbl_80534B48;
extern void *lbl_80534B64;
}
class UnknownGenV802E97D4_0 {
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
void *fn_802E9714(){return lbl_80534B64;}
void *fn_802E9724(){return lbl_80534B48;}
void *fn_802E9734(){return lbl_80534B38;}
void *fn_802E9744(){return lbl_80534B24;}
void *fn_802E9754(){return lbl_80534AC4;}
void *fn_802E9764(){return lbl_80534A90;}
void *fn_802E9774(){return lbl_80534A84;}
void *fn_802E9784(){return lbl_80534A74;}
void *fn_802E9794(){return lbl_80534A5C;}
void *fn_802E97A4(){return lbl_80534A50;}
void *fn_802E97B4(){return lbl_80534A04;}
void *fn_802E97C4(){return lbl_805349F8;}
void fn_802E97D4(int p0){
 fn_800667B0();
 void *value0=reinterpret_cast<UnknownGenV802E97D4_0 *>((void *)p0)->s58();
 fn_80065704(value0,1);
}
}
#pragma pop
