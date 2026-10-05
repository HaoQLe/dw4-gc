#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802B2E3C();
void *fn_802CD4FC();
void fn_802CD548();
void fn_802CD7A4();
void fn_802E3D20();
extern char lbl_8041F57C[];
extern char lbl_804D1208[];
extern char lbl_80534F70[];
void fn_802CD708();
void *fn_802CD784();
}
extern "C" {
void fn_802CD6E0(){
 fn_80066188((int)fn_802CD708);
}
void fn_802CD708(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534F70,(int)fn_802E3D20,(int)fn_802B2E3C,(int)fn_802CD784,(int)lbl_8041F57C,32,(int)fn_802CD548,(int)fn_802CD7A4,0,(int)lbl_804D1208);
}
void *fn_802CD784(){return fn_802CD4FC();}
}
#pragma pop
