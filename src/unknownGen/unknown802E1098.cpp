#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2E3C();
void *fn_802E0EFC();
void fn_802E0F48();
void fn_802E3D20();
extern char lbl_80420A58[];
extern char lbl_805355D4[];
void fn_802E10C0();
void *fn_802E112C();
}
extern "C" {
void fn_802E1098(){
 fn_80066188((int)fn_802E10C0);
}
void fn_802E10C0(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805355D4,(int)fn_802E3D20,(int)fn_802B2E3C,(int)fn_802E112C,(int)lbl_80420A58,28,(int)fn_802E0F48,0,0,0);
}
void *fn_802E112C(){return fn_802E0EFC();}
}
#pragma pop
