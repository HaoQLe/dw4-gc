#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBinDataObject_register();
void beCriSfpData_fieldInit();
void *beCriSfpData_getMeta();
void beCriSfpData_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802DEA84();
void *fn_802DEB14();
extern char lbl_804207E4[];
extern char lbl_805354E4[];
void beCriSfpData_register();
void *beCriSfpData_getMetaCall();
}
extern "C" {
void fn_802DE9C0(){
 fn_80066188((int)beCriSfpData_register);
}
void beCriSfpData_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805354E4,(int)beBinDataObject_register,(int)fn_802DEA84,(int)beCriSfpData_getMetaCall,(int)lbl_804207E4,40,(int)beCriSfpData_vtableRead,(int)beCriSfpData_fieldInit,(int)fn_802DEB14,0);
}
void *beCriSfpData_getMetaCall(){return beCriSfpData_getMeta();}
}
#pragma pop
