#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfo_register();
void beGeneraterInfo_fieldInit();
void *beGeneraterInfo_getMeta();
void beGeneraterInfo_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2E3C();
extern char lbl_80420028[];
extern char lbl_804D1D98[];
extern char lbl_80535288[];
void beGeneraterInfo_register();
void *beGeneraterInfo_getMetaCall();
}
extern "C" {
void fn_802D7178(){
 fn_80066188((int)beGeneraterInfo_register);
}
void beGeneraterInfo_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535288,(int)beBaseInfo_register,(int)fn_802B2E3C,(int)beGeneraterInfo_getMetaCall,(int)lbl_80420028,32,(int)beGeneraterInfo_vtableRead,(int)beGeneraterInfo_fieldInit,0,(int)lbl_804D1D98);
}
void *beGeneraterInfo_getMetaCall(){return beGeneraterInfo_getMeta();}
}
#pragma pop
