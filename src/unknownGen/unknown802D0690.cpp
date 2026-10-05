#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802B2E3C();
void *fn_802D0454();
void fn_802D04A0();
void fn_802D0754();
void fn_802E3D20();
extern char lbl_8041F934[];
extern char lbl_804D168C[];
extern char lbl_80535094[];
void fn_802D06B8();
void *fn_802D0734();
}
extern "C" {
void fn_802D0690(){
 fn_80066188((int)fn_802D06B8);
}
void fn_802D06B8(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535094,(int)fn_802E3D20,(int)fn_802B2E3C,(int)fn_802D0734,(int)lbl_8041F934,40,(int)fn_802D04A0,(int)fn_802D0754,0,(int)lbl_804D168C);
}
void *fn_802D0734(){return fn_802D0454();}
}
#pragma pop
