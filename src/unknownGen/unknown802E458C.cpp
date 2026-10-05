#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802B2E3C();
void fn_802E3D20();
void *fn_802E43A8();
void fn_802E43F4();
void fn_802E4650();
extern char lbl_80420E1C[];
extern char lbl_804D2E64[];
extern char lbl_80535728[];
void fn_802E45B4();
void *fn_802E4630();
}
extern "C" {
void fn_802E458C(){
 fn_80066188((int)fn_802E45B4);
}
void fn_802E45B4(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535728,(int)fn_802E3D20,(int)fn_802B2E3C,(int)fn_802E4630,(int)lbl_80420E1C,32,(int)fn_802E43F4,(int)fn_802E4650,0,(int)lbl_804D2E64);
}
void *fn_802E4630(){return fn_802E43A8();}
}
#pragma pop
