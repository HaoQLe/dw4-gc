#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beCopyModelCtrl2_fieldInit();
void *beCopyModelCtrl2_getMeta();
void beCopyModelCtrl2_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_801BC078();
void fn_802B1AC8();
void *fn_802E0C48();
void igTransform_register();
extern char beCopyModelCtrl2_className[];
extern char beCopyModelCtrl2_dependencies[];
extern char beCopyModelCtrl2_meta[];
void beCopyModelCtrl2_register();
void *beCopyModelCtrl2_getMetaCall();
}
extern "C" {
void beCopyModelCtrl2_arkRegister(){
 meta_registerNow((int)beCopyModelCtrl2_register);
}
void beCopyModelCtrl2_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beCopyModelCtrl2_meta,(int)igTransform_register,(int)fn_801BC078,(int)beCopyModelCtrl2_getMetaCall,(int)beCopyModelCtrl2_className,112,(int)beCopyModelCtrl2_vtableRead,(int)beCopyModelCtrl2_fieldInit,(int)fn_802E0C48,(int)beCopyModelCtrl2_dependencies);
}
void *beCopyModelCtrl2_getMetaCall(){return beCopyModelCtrl2_getMeta();}
}
#pragma pop
