#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern void *lbl_80564B74;
extern void *lbl_80564B98;
extern void *lbl_80564BD4;
extern void *lbl_80564C88;
extern void *lbl_80564D20;
extern void *lbl_80564D8C;
}
class UnknownGenV802157C0_0 {
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
};
extern "C" {
void fn_80215780(void *object,unsigned char value){*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(object)+36)=value;}
void *fn_80215788(){return lbl_80564B74;}
void *fn_80215790(){return lbl_80564B98;}
int fn_80215798(){return 0;}
void *fn_802157A0(){return lbl_80564BD4;}
void *fn_802157A8(){return lbl_80564C88;}
void *fn_802157B0(){return lbl_80564D20;}
int fn_802157B8(){return 1;}
void fn_802157C0(int p0){
 reinterpret_cast<UnknownGenV802157C0_0 *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+56))->s68();
}
void *fn_802157F0(){return lbl_80564D8C;}
int fn_802157F8(){return 1;}
}
#pragma pop
