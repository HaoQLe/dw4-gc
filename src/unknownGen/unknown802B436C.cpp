#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoRam_register();
void beWaterPlainInfoRam_fieldInit();
void *beWaterPlainInfoRam_getMeta();
void beWaterPlainInfoRam_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2B2C();
extern char lbl_8041CB18[];
extern char lbl_804CEE5C[];
extern char lbl_8053457C[];
void beWaterPlainInfoRam_register();
void *beWaterPlainInfoRam_getMetaCall();
}
extern "C" {
void fn_802B436C(){
 fn_80066188((int)beWaterPlainInfoRam_register);
}
void beWaterPlainInfoRam_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_8053457C,(int)beBaseInfoRam_register,(int)fn_802B2B2C,(int)beWaterPlainInfoRam_getMetaCall,(int)lbl_8041CB18,184,(int)beWaterPlainInfoRam_vtableRead,(int)beWaterPlainInfoRam_fieldInit,0,(int)lbl_804CEE5C);
}
void *beWaterPlainInfoRam_getMetaCall(){return beWaterPlainInfoRam_getMeta();}
}
#pragma pop
