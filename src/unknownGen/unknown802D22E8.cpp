#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_802B1AC8();
void *fn_802D2254();
void fn_802D22A0();
void fn_802D23A4();
extern char lbl_8041FAEC[];
extern char lbl_80535118[];
void fn_802D2310();
void *fn_802D2384();
}
extern "C" {
void fn_802D22E8(){
 fn_80066188((int)fn_802D2310);
}
void fn_802D2310(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535118,(int)fn_80066B08,(int)fn_800237D0,(int)fn_802D2384,(int)lbl_8041FAEC,16,(int)fn_802D22A0,(int)fn_802D23A4,0,0);
}
void *fn_802D2384(){return fn_802D2254();}
}
#pragma pop
