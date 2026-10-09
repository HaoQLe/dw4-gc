#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beSvPlatBaseData_register();
void beSvPlatDataGC_fieldInit();
void *beSvPlatDataGC_getMeta();
void beSvPlatDataGC_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802BC428();
extern char lbl_8041DEA4[];
extern char lbl_805348D0[];
void beSvPlatDataGC_register();
void *beSvPlatDataGC_getMetaCall();
}
extern "C" {
void fn_802BD210(){
 fn_80066188((int)beSvPlatDataGC_register);
}
void beSvPlatDataGC_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805348D0,(int)beSvPlatBaseData_register,(int)fn_802BC428,(int)beSvPlatDataGC_getMetaCall,(int)lbl_8041DEA4,140,(int)beSvPlatDataGC_vtableRead,(int)beSvPlatDataGC_fieldInit,0,0);
}
void *beSvPlatDataGC_getMetaCall(){return beSvPlatDataGC_getMeta();}
}
#pragma pop
