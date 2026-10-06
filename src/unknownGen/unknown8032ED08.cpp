#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8032B8A4();
void *fn_8032EABC();
void fn_8032EB08();
void fn_8032F0D0();
void fn_80333F14();
extern char lbl_8045398C[];
extern char lbl_804E1CE4[];
extern char lbl_804E1CF8[];
extern char lbl_804E1D0C[];
extern char lbl_804E1D20[];
extern void *lbl_80535E80;
extern void *lbl_80535E98;
void fn_8032ED30();
void *fn_8032EDA4();
void fn_8032EDC4();
}
extern "C" {
void fn_8032ED08(){
 fn_80066188((int)fn_8032ED30);
}
void fn_8032ED30(){
 fn_803250AC();
 fn_80066204(0,(int)&lbl_80535E80,(int)fn_80333F14,(int)fn_8032B8A4,(int)fn_8032EDA4,(int)lbl_8045398C,104,(int)fn_8032EB08,(int)fn_8032EDC4,0,0);
}
void *fn_8032EDA4(){return fn_8032EABC();}
void fn_8032EDC4(){
 void *meta=lbl_80535E80;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804E1CE4,0x5);
 fn_800659C0(meta,lbl_804E1CF8,lbl_804E1D0C,lbl_804E1D20,field);
}
void *fn_8032EE44(void *object){
 fn_8032F0D0();
 return fn_8006546C(lbl_80535E98,object);
}
void *fn_8032EE84(){
 if(!lbl_80535E98 || !(reinterpret_cast<unsigned int *>(lbl_80535E98)[0x24/4]&4)) fn_8032F0D0();
 return lbl_80535E98;
}
}
#pragma pop
