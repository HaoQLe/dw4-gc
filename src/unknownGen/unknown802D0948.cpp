#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802D0888();
void fn_802D08D4();
void fn_802D0B30();
extern char lbl_8041F95C[];
extern char lbl_804D16CC[];
extern char lbl_805350A4[];
extern void *lbl_805350A8;
extern void *lbl_805621F4;
void fn_802D0970();
void *fn_802D09E4();
}
extern "C" {
void fn_802D0948(){
 fn_80066188((int)fn_802D0970);
}
void fn_802D0970(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805350A4,(int)fn_8002907C,(int)fn_80024180,(int)fn_802D09E4,(int)lbl_8041F95C,20,(int)fn_802D08D4,0,0,(int)lbl_804D16CC);
}
void *fn_802D09E4(){return fn_802D0888();}
void *fn_802D0A04(){
 if(!lbl_805350A8) lbl_805350A8=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805350A8;
}
void *fn_802D0A58(){
 if(!lbl_805350A8 || !(reinterpret_cast<unsigned int *>(lbl_805350A8)[0x24/4]&4)) fn_802D0B30();
 return lbl_805350A8;
}
}
#pragma pop
