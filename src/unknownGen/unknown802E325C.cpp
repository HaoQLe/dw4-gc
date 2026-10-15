#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoRam_fieldInit();
void *beBaseInfoRam_getMeta();
void beBaseInfoRam_vtableRead();
void *fn_800237D0();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igObject_register();
extern char beBaseInfoRam_className[];
extern char lbl_804D2CC0[];
extern char beBaseInfoRam_meta[];
void beBaseInfoRam_register();
void *beBaseInfoRam_getMetaCall();
}
extern "C" {
void beBaseInfoRam_registerNow(){
 meta_registerNow((int)beBaseInfoRam_register);
}
void beBaseInfoRam_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beBaseInfoRam_meta,(int)igObject_register,(int)fn_800237D0,(int)beBaseInfoRam_getMetaCall,(int)beBaseInfoRam_className,44,(int)beBaseInfoRam_vtableRead,(int)beBaseInfoRam_fieldInit,0,(int)lbl_804D2CC0);
}
void *beBaseInfoRam_getMetaCall(){return beBaseInfoRam_getMeta();}
}
#pragma pop
