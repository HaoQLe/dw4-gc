#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2E3C();
void *fn_802D3228();
void fn_802D3274();
void fn_802D34D0();
void fn_802E3D20();
extern char lbl_8041FB80[];
extern char lbl_804D1904[];
extern char lbl_80535150[];
void fn_802D3434();
void *fn_802D34B0();
}
extern "C" {
void fn_802D340C(){
 fn_80066188((int)fn_802D3434);
}
void fn_802D3434(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535150,(int)fn_802E3D20,(int)fn_802B2E3C,(int)fn_802D34B0,(int)lbl_8041FB80,32,(int)fn_802D3274,(int)fn_802D34D0,0,(int)lbl_804D1904);
}
void *fn_802D34B0(){return fn_802D3228();}
}
#pragma pop
