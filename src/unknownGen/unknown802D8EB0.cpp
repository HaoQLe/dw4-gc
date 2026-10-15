#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoData_register();
void beFontInfoData_fieldInit();
void *beFontInfoData_getMeta();
void beFontInfoData_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B8770();
extern char beFontInfoData_className[];
extern char lbl_804D1FB0[];
extern char beFontInfoData_meta[];
void beFontInfoData_register();
void *beFontInfoData_getMetaCall();
}
extern "C" {
void beFontInfoData_registerNow(){
 meta_registerNow((int)beFontInfoData_register);
}
void beFontInfoData_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beFontInfoData_meta,(int)beBaseInfoData_register,(int)fn_802B8770,(int)beFontInfoData_getMetaCall,(int)beFontInfoData_className,44,(int)beFontInfoData_vtableRead,(int)beFontInfoData_fieldInit,0,(int)lbl_804D1FB0);
}
void *beFontInfoData_getMetaCall(){return beFontInfoData_getMeta();}
}
#pragma pop
