#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void fn_80029D58();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802CA918();
void fn_802CA964();
void fn_802CAABC();
extern char lbl_8041F1D8[];
extern char lbl_80534EA0[];
void fn_802CAA28();
void *fn_802CAA9C();
}
extern "C" {
void fn_802CAA00(){
 fn_80066188((int)fn_802CAA28);
}
void fn_802CAA28(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534EA0,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_802CAA9C,(int)lbl_8041F1D8,24,(int)fn_802CA964,(int)fn_802CAABC,0,0);
}
void *fn_802CAA9C(){return fn_802CA918();}
}
#pragma pop
