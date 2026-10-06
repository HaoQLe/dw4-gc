#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801BD92C();
void fn_802B1AC8();
void *fn_802D5088();
void fn_802D50D4();
void fn_802D53B8();
extern char lbl_8041FDEC[];
extern char lbl_804D1B44[];
extern char lbl_805351DC[];
extern void *lbl_80564E3C;
void fn_802D530C();
void *fn_802D5388();
void *fn_802D53A8();
}
extern "C" {
void fn_802D52E4(){
 fn_80066188((int)fn_802D530C);
}
void fn_802D530C(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805351DC,(int)fn_801BD92C,(int)fn_802D53A8,(int)fn_802D5388,(int)lbl_8041FDEC,72,(int)fn_802D50D4,(int)fn_802D53B8,0,(int)lbl_804D1B44);
}
void *fn_802D5388(){return fn_802D5088();}
void *fn_802D53A8(){return lbl_80564E3C;}
}
#pragma pop
