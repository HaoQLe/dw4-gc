#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfo_register();
void beShadow01Info_fieldInit();
void *beShadow01Info_getMeta();
void beShadow01Info_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2E3C();
extern char beShadow01Info_className[];
extern char lbl_804CF664[];
extern char beShadow01Info_meta[];
void beShadow01Info_register();
void *beShadow01Info_getMetaCall();
}
extern "C" {
void beShadow01Info_registerNow(){
 meta_registerNow((int)beShadow01Info_register);
}
void beShadow01Info_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beShadow01Info_meta,(int)beBaseInfo_register,(int)fn_802B2E3C,(int)beShadow01Info_getMetaCall,(int)beShadow01Info_className,40,(int)beShadow01Info_vtableRead,(int)beShadow01Info_fieldInit,0,(int)lbl_804CF664);
}
void *beShadow01Info_getMetaCall(){return beShadow01Info_getMeta();}
}
#pragma pop
