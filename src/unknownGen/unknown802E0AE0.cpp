#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beCopyModelCtrl2_fieldInit();
void *beCopyModelCtrl2_getMeta();
void beCopyModelCtrl2_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_801BC078();
void fn_802B1AC8();
void *fn_802E0C48();
void igTransform_register();
extern char lbl_80420A1C[];
extern char lbl_804D2940[];
extern char lbl_805355C4[];
void beCopyModelCtrl2_register();
void *beCopyModelCtrl2_getMetaCall();
}
extern "C" {
void fn_802E0AE0(){
 fn_80066188((int)beCopyModelCtrl2_register);
}
void beCopyModelCtrl2_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805355C4,(int)igTransform_register,(int)fn_801BC078,(int)beCopyModelCtrl2_getMetaCall,(int)lbl_80420A1C,112,(int)beCopyModelCtrl2_vtableRead,(int)beCopyModelCtrl2_fieldInit,(int)fn_802E0C48,(int)lbl_804D2940);
}
void *beCopyModelCtrl2_getMetaCall(){return beCopyModelCtrl2_getMeta();}
}
#pragma pop
