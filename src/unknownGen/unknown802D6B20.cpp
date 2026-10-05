#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_802B1AC8();
void *fn_802D6A04();
void fn_802D6A50();
void fn_802D6BE4();
extern char lbl_8041FF7C[];
extern char lbl_804D1CE8[];
extern char lbl_80535258[];
void fn_802D6B48();
void *fn_802D6BC4();
}
extern "C" {
void fn_802D6B20(){
 fn_80066188((int)fn_802D6B48);
}
void fn_802D6B48(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535258,(int)fn_80066B08,(int)fn_800237D0,(int)fn_802D6BC4,(int)lbl_8041FF7C,40,(int)fn_802D6A50,(int)fn_802D6BE4,0,(int)lbl_804D1CE8);
}
void *fn_802D6BC4(){return fn_802D6A04();}
}
#pragma pop
