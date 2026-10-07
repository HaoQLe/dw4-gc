#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80338FF4();
void fn_80339040();
void fn_80339494();
void fn_80339814();
extern char lbl_804543A0[];
extern char lbl_804E27B0[];
extern char lbl_80536188[];
extern void *lbl_805361BC;
void fn_803393E8();
void *fn_80339464();
void *fn_80339484();
}
extern "C" {
void fn_803393C0(){
 fn_80066188((int)fn_803393E8);
}
void fn_803393E8(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536188,(int)fn_80339814,(int)fn_80339484,(int)fn_80339464,(int)lbl_804543A0,304,(int)fn_80339040,(int)fn_80339494,0,(int)lbl_804E27B0);
}
void *fn_80339464(){return fn_80338FF4();}
void *fn_80339484(){return lbl_805361BC;}
}
#pragma pop
