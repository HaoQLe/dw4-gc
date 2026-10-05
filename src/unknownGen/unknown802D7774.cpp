#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void fn_80029D58();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802D74B4();
void fn_802D7500();
void fn_802D7838();
extern char lbl_8042004C[];
extern char lbl_804D1DB8[];
extern char lbl_80535294[];
void fn_802D779C();
void *fn_802D7818();
}
extern "C" {
void fn_802D7774(){
 fn_80066188((int)fn_802D779C);
}
void fn_802D779C(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535294,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_802D7818,(int)lbl_8042004C,68,(int)fn_802D7500,(int)fn_802D7838,0,(int)lbl_804D1DB8);
}
void *fn_802D7818(){return fn_802D74B4();}
}
#pragma pop
