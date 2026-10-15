#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beSvPlatBaseData_register();
void beSvPlatDataGC_fieldInit();
void *beSvPlatDataGC_getMeta();
void beSvPlatDataGC_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802BC428();
extern char beSvPlatDataGC_className[];
extern char beSvPlatDataGC_meta[];
void beSvPlatDataGC_register();
void *beSvPlatDataGC_getMetaCall();
}
extern "C" {
void beSvPlatDataGC_registerNow(){
 meta_registerNow((int)beSvPlatDataGC_register);
}
void beSvPlatDataGC_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beSvPlatDataGC_meta,(int)beSvPlatBaseData_register,(int)fn_802BC428,(int)beSvPlatDataGC_getMetaCall,(int)beSvPlatDataGC_className,140,(int)beSvPlatDataGC_vtableRead,(int)beSvPlatDataGC_fieldInit,0,0);
}
void *beSvPlatDataGC_getMetaCall(){return beSvPlatDataGC_getMeta();}
}
#pragma pop
