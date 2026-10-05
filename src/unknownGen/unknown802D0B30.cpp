#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_802B1AC8();
void *fn_802D0A58();
void fn_802D0AA4();
void fn_802D0BF4();
extern char lbl_8041F970[];
extern char lbl_804D16D4[];
extern char lbl_805350A8[];
void fn_802D0B58();
void *fn_802D0BD4();
}
extern "C" {
void fn_802D0B30(){
 fn_80066188((int)fn_802D0B58);
}
void fn_802D0B58(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805350A8,(int)fn_80066B08,(int)fn_800237D0,(int)fn_802D0BD4,(int)lbl_8041F970,28,(int)fn_802D0AA4,(int)fn_802D0BF4,0,(int)lbl_804D16D4);
}
void *fn_802D0BD4(){return fn_802D0A58();}
}
#pragma pop
