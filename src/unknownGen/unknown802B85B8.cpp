#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802B2E3C();
void *fn_802B841C();
void fn_802B8468();
void fn_802E3D20();
extern char lbl_8041D620[];
extern char lbl_80534730[];
void fn_802B85E0();
void *fn_802B864C();
}
extern "C" {
void fn_802B85B8(){
 fn_80066188((int)fn_802B85E0);
}
void fn_802B85E0(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534730,(int)fn_802E3D20,(int)fn_802B2E3C,(int)fn_802B864C,(int)lbl_8041D620,28,(int)fn_802B8468,0,0,0);
}
void *fn_802B864C(){return fn_802B841C();}
}
#pragma pop
