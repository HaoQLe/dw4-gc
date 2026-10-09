#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoData_register();
void beFontInfoData_fieldInit();
void *beFontInfoData_getMeta();
void beFontInfoData_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B8770();
extern char lbl_8042024C[];
extern char lbl_804D1FB0[];
extern char lbl_80535318[];
void beFontInfoData_register();
void *beFontInfoData_getMetaCall();
}
extern "C" {
void fn_802D8EB0(){
 fn_80066188((int)beFontInfoData_register);
}
void beFontInfoData_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535318,(int)beBaseInfoData_register,(int)fn_802B8770,(int)beFontInfoData_getMetaCall,(int)lbl_8042024C,44,(int)beFontInfoData_vtableRead,(int)beFontInfoData_fieldInit,0,(int)lbl_804D1FB0);
}
void *beFontInfoData_getMetaCall(){return beFontInfoData_getMeta();}
}
#pragma pop
