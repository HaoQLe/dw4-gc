#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_802B1AC8();
void *fn_802CFEA4();
void fn_802CFEF0();
void fn_802D0084();
extern char lbl_8041F8EC[];
extern char lbl_804D1648[];
extern char lbl_80535080[];
void fn_802CFFE8();
void *fn_802D0064();
}
extern "C" {
void fn_802CFFC0(){
 fn_80066188((int)fn_802CFFE8);
}
void fn_802CFFE8(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535080,(int)fn_80066B08,(int)fn_800237D0,(int)fn_802D0064,(int)lbl_8041F8EC,16,(int)fn_802CFEF0,(int)fn_802D0084,0,(int)lbl_804D1648);
}
void *fn_802D0064(){return fn_802CFEA4();}
}
#pragma pop
