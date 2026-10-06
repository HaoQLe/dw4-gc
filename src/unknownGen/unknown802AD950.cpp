#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800667A4();
void fn_800667A8();
void fn_800667CC();
void fn_802AE9F0();
void fn_802AEA80();
void fn_803FAF7C(void *,void *,void *);
extern void *lbl_80515CC8;
extern void *lbl_80534354;
extern void *lbl_80534358;
extern void *lbl_80534364;
extern void *lbl_80534368;
extern void *lbl_805343D4;
extern void *lbl_805343D8;
extern void *lbl_80534404;
extern void *lbl_80534408;
extern void *lbl_80534414;
extern void *lbl_80562548;
}
extern "C" {
void *fn_802AD950(){return lbl_80515CC8;}
void *fn_802AD960(){return lbl_80534414;}
void *fn_802AD970(){return lbl_80534408;}
void *fn_802AD980(){return lbl_80534404;}
void *fn_802AD990(){return lbl_805343D4;}
void *fn_802AD9A0(){return lbl_80534364;}
void *fn_802AD9B0(){return lbl_80534358;}
void *fn_802AD9C0(){return lbl_80534368;}
void *fn_802AD9D0(){return lbl_80534354;}
void *fn_802AD9E0(){return lbl_805343D8;}
void *fn_802AD9F0(){return lbl_80534414;}
void *fn_802ADA00(){return lbl_80562548;}
void *fn_802ADA10(){return lbl_80534358;}
void *fn_802ADA20(){return lbl_80534368;}
int fn_802ADA30(){return 1;}
int fn_802ADA38(){return 1;}
void fn_802ADA40(int p0){
 fn_800667CC();
 *reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8)=(void *)0;
 *reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16)=(void *)0;
 *reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24)=(void *)0;
}
void fn_802ADA7C(int p0){
 fn_800667A4();
 fn_803FAF7C((void *)fn_802AE9F0,(void *)fn_802AEA80,(void *)p0);
}
void fn_802ADAC0(){return fn_800667A8();}
int fn_802ADAE0(){return 1;}
}
#pragma pop
