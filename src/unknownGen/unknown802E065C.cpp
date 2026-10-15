#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beCopyTransform_fieldInit();
void *beCopyTransform_getMeta();
void beCopyTransform_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_801BC078();
void fn_802B1AC8();
void *fn_802E07C4();
void igTransform_register();
extern char beCopyTransform_className[];
extern char beCopyTransform_dependencies[];
extern char beCopyTransform_meta[];
void beCopyTransform_register();
void *beCopyTransform_getMetaCall();
}
extern "C" {
void beCopyTransform_arkRegister(){
 meta_registerNow((int)beCopyTransform_register);
}
void beCopyTransform_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beCopyTransform_meta,(int)igTransform_register,(int)fn_801BC078,(int)beCopyTransform_getMetaCall,(int)beCopyTransform_className,112,(int)beCopyTransform_vtableRead,(int)beCopyTransform_fieldInit,(int)fn_802E07C4,(int)beCopyTransform_dependencies);
}
void *beCopyTransform_getMetaCall(){return beCopyTransform_getMeta();}
}
#pragma pop
