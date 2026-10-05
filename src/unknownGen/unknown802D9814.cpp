#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80114C04();
void fn_802B1AC8();
void *fn_802D9638();
void fn_802D9684();
void fn_802D98C8();
extern char lbl_804202C0[];
extern char lbl_80535348[];
void fn_802D983C();
void *fn_802D98A8();
}
extern "C" {
void fn_802D9814(){
 fn_80066188((int)fn_802D983C);
}
void fn_802D983C(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535348,(int)fn_80114C04,(int)fn_802D98C8,(int)fn_802D98A8,(int)lbl_804202C0,36,(int)fn_802D9684,0,0,0);
}
void *fn_802D98A8(){return fn_802D9638();}
}
#pragma pop
