#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80284550();
void fn_80286F0C();
void fn_802B1AC8();
void *fn_802CDF58();
void fn_802CDFA4();
void fn_802CE2B4();
extern char lbl_8041F694[];
extern char lbl_804D134C[];
extern char lbl_80534FBC[];
void fn_802CE218();
void *fn_802CE294();
}
extern "C" {
void fn_802CE1F0(){
 fn_80066188((int)fn_802CE218);
}
void fn_802CE218(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534FBC,(int)fn_80286F0C,(int)fn_80284550,(int)fn_802CE294,(int)lbl_8041F694,56,(int)fn_802CDFA4,(int)fn_802CE2B4,0,(int)lbl_804D134C);
}
void *fn_802CE294(){return fn_802CDF58();}
}
#pragma pop
