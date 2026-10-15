#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoRam_register();
void beWaterPlainInfoRam_fieldInit();
void *beWaterPlainInfoRam_getMeta();
void beWaterPlainInfoRam_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2B2C();
extern char beWaterPlainInfoRam_className[];
extern char lbl_804CEE5C[];
extern char beWaterPlainInfoRam_meta[];
void beWaterPlainInfoRam_register();
void *beWaterPlainInfoRam_getMetaCall();
}
extern "C" {
void beWaterPlainInfoRam_registerNow(){
 meta_registerNow((int)beWaterPlainInfoRam_register);
}
void beWaterPlainInfoRam_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beWaterPlainInfoRam_meta,(int)beBaseInfoRam_register,(int)fn_802B2B2C,(int)beWaterPlainInfoRam_getMetaCall,(int)beWaterPlainInfoRam_className,184,(int)beWaterPlainInfoRam_vtableRead,(int)beWaterPlainInfoRam_fieldInit,0,(int)lbl_804CEE5C);
}
void *beWaterPlainInfoRam_getMetaCall(){return beWaterPlainInfoRam_getMeta();}
}
#pragma pop
