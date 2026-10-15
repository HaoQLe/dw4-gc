#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beSvPlatBaseData_register();
void beSvPlatDataXbox_fieldInit();
void *beSvPlatDataXbox_getMeta();
void beSvPlatDataXbox_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802BC428();
extern char beSvPlatDataXbox_className[];
extern char beSvPlatDataXbox_dependencies[];
extern char beSvPlatDataXbox_meta[];
void beSvPlatDataXbox_register();
void *beSvPlatDataXbox_getMetaCall();
}
extern "C" {
void beSvPlatDataXbox_arkRegister(){
 meta_registerNow((int)beSvPlatDataXbox_register);
}
void beSvPlatDataXbox_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beSvPlatDataXbox_meta,(int)beSvPlatBaseData_register,(int)fn_802BC428,(int)beSvPlatDataXbox_getMetaCall,(int)beSvPlatDataXbox_className,44,(int)beSvPlatDataXbox_vtableRead,(int)beSvPlatDataXbox_fieldInit,0,(int)beSvPlatDataXbox_dependencies);
}
void *beSvPlatDataXbox_getMetaCall(){return beSvPlatDataXbox_getMeta();}
}
#pragma pop
