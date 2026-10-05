#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2E3C();
void *fn_802B4BF4();
void fn_802B4C40();
void fn_802E3D20();
extern char lbl_8041CCF0[];
extern char lbl_80534618[];
void fn_802B4DB8();
void *fn_802B4E24();
}
extern "C" {
void fn_802B4D90(){
 fn_80066188((int)fn_802B4DB8);
}
void fn_802B4DB8(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534618,(int)fn_802E3D20,(int)fn_802B2E3C,(int)fn_802B4E24,(int)lbl_8041CCF0,28,(int)fn_802B4C40,0,0,0);
}
void *fn_802B4E24(){return fn_802B4BF4();}
}
#pragma pop
