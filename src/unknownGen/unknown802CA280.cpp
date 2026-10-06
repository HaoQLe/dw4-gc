#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802CA1C0();
void fn_802CA20C();
void fn_802CA57C();
extern char lbl_8041F138[];
extern char lbl_804D0E3C[];
extern char lbl_80534E6C[];
extern void *lbl_80534E70;
void fn_802CA2A8();
void *fn_802CA31C();
}
extern "C" {
void fn_802CA280(){
 fn_80066188((int)fn_802CA2A8);
}
void fn_802CA2A8(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534E6C,(int)fn_8002907C,(int)fn_80024180,(int)fn_802CA31C,(int)lbl_8041F138,20,(int)fn_802CA20C,0,0,(int)lbl_804D0E3C);
}
void *fn_802CA31C(){return fn_802CA1C0();}
void *fn_802CA33C(){
 if(!lbl_80534E70 || !(reinterpret_cast<unsigned int *>(lbl_80534E70)[0x24/4]&4)) fn_802CA57C();
 return lbl_80534E70;
}
}
#pragma pop
