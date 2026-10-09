#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfo_register();
void beFontInfo_fieldInit();
void *beFontInfo_getMeta();
void beFontInfo_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2E3C();
extern char lbl_80420230[];
extern char lbl_804D1F98[];
extern char lbl_80535310[];
void beFontInfo_register();
void *beFontInfo_getMetaCall();
}
extern "C" {
void fn_802D8BC0(){
 fn_80066188((int)beFontInfo_register);
}
void beFontInfo_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535310,(int)beBaseInfo_register,(int)fn_802B2E3C,(int)beFontInfo_getMetaCall,(int)lbl_80420230,32,(int)beFontInfo_vtableRead,(int)beFontInfo_fieldInit,0,(int)lbl_804D1F98);
}
void *beFontInfo_getMetaCall(){return beFontInfo_getMeta();}
}
#pragma pop
