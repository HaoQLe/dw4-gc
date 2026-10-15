#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBinDataObject_register();
void beCriSfpData_fieldInit();
void *beCriSfpData_getMeta();
void beCriSfpData_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802DEA84();
void *fn_802DEB14();
extern char beCriSfpData_className[];
extern char beCriSfpData_meta[];
void beCriSfpData_register();
void *beCriSfpData_getMetaCall();
}
extern "C" {
void beCriSfpData_arkRegister(){
 meta_registerNow((int)beCriSfpData_register);
}
void beCriSfpData_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beCriSfpData_meta,(int)beBinDataObject_register,(int)fn_802DEA84,(int)beCriSfpData_getMetaCall,(int)beCriSfpData_className,40,(int)beCriSfpData_vtableRead,(int)beCriSfpData_fieldInit,(int)fn_802DEB14,0);
}
void *beCriSfpData_getMetaCall(){return beCriSfpData_getMeta();}
}
#pragma pop
