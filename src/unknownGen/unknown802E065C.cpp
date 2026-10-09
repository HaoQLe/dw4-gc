#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beCopyTransform_fieldInit();
void *beCopyTransform_getMeta();
void beCopyTransform_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_801BC078();
void fn_802B1AC8();
void *fn_802E07C4();
void igTransform_register();
extern char lbl_804209FC[];
extern char lbl_804D2928[];
extern char lbl_805355BC[];
void beCopyTransform_register();
void *beCopyTransform_getMetaCall();
}
extern "C" {
void fn_802E065C(){
 fn_80066188((int)beCopyTransform_register);
}
void beCopyTransform_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805355BC,(int)igTransform_register,(int)fn_801BC078,(int)beCopyTransform_getMetaCall,(int)lbl_804209FC,112,(int)beCopyTransform_vtableRead,(int)beCopyTransform_fieldInit,(int)fn_802E07C4,(int)lbl_804D2928);
}
void *beCopyTransform_getMetaCall(){return beCopyTransform_getMeta();}
}
#pragma pop
