#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfo_register();
void beMeterCtrlInfo_fieldInit();
void *beMeterCtrlInfo_getMeta();
void beMeterCtrlInfo_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2E3C();
extern char beMeterCtrlInfo_className[];
extern char lbl_804D1208[];
extern char beMeterCtrlInfo_meta[];
void beMeterCtrlInfo_register();
void *beMeterCtrlInfo_getMetaCall();
}
extern "C" {
void beMeterCtrlInfo_registerNow(){
 meta_registerNow((int)beMeterCtrlInfo_register);
}
void beMeterCtrlInfo_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beMeterCtrlInfo_meta,(int)beBaseInfo_register,(int)fn_802B2E3C,(int)beMeterCtrlInfo_getMetaCall,(int)beMeterCtrlInfo_className,32,(int)beMeterCtrlInfo_vtableRead,(int)beMeterCtrlInfo_fieldInit,0,(int)lbl_804D1208);
}
void *beMeterCtrlInfo_getMetaCall(){return beMeterCtrlInfo_getMeta();}
}
#pragma pop
