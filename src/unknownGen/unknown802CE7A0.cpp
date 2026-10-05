#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_802B1AC8();
void *fn_802CE5E4();
void fn_802CE630();
void fn_802CE864();
extern char lbl_8041F720[];
extern char lbl_804D13EC[];
extern char lbl_80534FE4[];
void fn_802CE7C8();
void *fn_802CE844();
}
extern "C" {
void fn_802CE7A0(){
 fn_80066188((int)fn_802CE7C8);
}
void fn_802CE7C8(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534FE4,(int)fn_80066B08,(int)fn_800237D0,(int)fn_802CE844,(int)lbl_8041F720,32,(int)fn_802CE630,(int)fn_802CE864,0,(int)lbl_804D13EC);
}
void *fn_802CE844(){return fn_802CE5E4();}
}
#pragma pop
