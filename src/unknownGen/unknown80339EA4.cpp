#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802CCE38();
void fn_803250AC();
void *fn_803386E8();
void *fn_80339D34();
void fn_80339D80();
void fn_8033A15C();
extern char lbl_80454670[];
extern char lbl_805361EC[];
extern void *lbl_805361F0;
extern void *lbl_805621F4;
void fn_80339ECC();
void *fn_80339F38();
}
extern "C" {
void fn_80339EA4(){
 fn_80066188((int)fn_80339ECC);
}
void fn_80339ECC(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_805361EC,(int)fn_802CCE38,(int)fn_803386E8,(int)fn_80339F38,(int)lbl_80454670,44,(int)fn_80339D80,0,0,0);
}
void *fn_80339F38(){return fn_80339D34();}
void *fn_80339F58(void *object){
 fn_8033A15C();
 return fn_8006546C(lbl_805361F0,object);
}
void *fn_80339F98(){
 if(!lbl_805361F0) lbl_805361F0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805361F0;
}
void *fn_80339FEC(){
 if(!lbl_805361F0 || !(reinterpret_cast<unsigned int *>(lbl_805361F0)[0x24/4]&4)) fn_8033A15C();
 return lbl_805361F0;
}
}
#pragma pop
