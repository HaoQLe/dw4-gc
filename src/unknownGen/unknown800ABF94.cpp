#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800ABC8C();
void fn_800AC1D8();
void fn_800BB858();
extern char lbl_80477D3C[];
extern void *lbl_805621F4;
extern void *lbl_8056240C;
extern void *lbl_80562410;
extern void *lbl_80562A68;
void *fn_800ABFD0();
void fn_800AC00C();
void fn_800AC034();
void *fn_800AC098();
void *fn_800AC0B8();
}
extern "C" {
void *fn_800ABF94(){
 if(!lbl_8056240C) lbl_8056240C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8056240C;
}
void *fn_800ABFD0(){
 if(!lbl_8056240C || !(reinterpret_cast<unsigned int *>(lbl_8056240C)[0x24/4]&4)) fn_800AC00C();
 return lbl_8056240C;
}
void fn_800AC00C(){
 fn_80066188((int)fn_800AC034);
}
void fn_800AC034(){
 fn_800ABC8C();
 fn_80066204(1,(int)&lbl_8056240C,(int)fn_800BB858,(int)fn_800AC0B8,(int)fn_800AC098,(int)lbl_80477D3C,12,0,0,0,0);
}
void *fn_800AC098(){return fn_800ABFD0();}
void *fn_800AC0B8(){return lbl_80562A68;}
void *fn_800AC0C0(){
 if(!lbl_80562410) lbl_80562410=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562410;
}
void *fn_800AC0FC(){
 if(!lbl_80562410 || !(reinterpret_cast<unsigned int *>(lbl_80562410)[0x24/4]&4)) fn_800AC1D8();
 return lbl_80562410;
}
}
#pragma pop
