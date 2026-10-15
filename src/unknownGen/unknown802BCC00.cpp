#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beSvPlatBaseData_register();
void beSvPlatDataPS2_fieldInit();
void *beSvPlatDataPS2_getMeta();
void beSvPlatDataPS2_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802BC428();
extern char beSvPlatDataPS2_className[];
extern char beSvPlatDataPS2_dependencies[];
extern char beSvPlatDataPS2_meta[];
void beSvPlatDataPS2_register();
void *beSvPlatDataPS2_getMetaCall();
}
extern "C" {
void beSvPlatDataPS2_arkRegister(){
 meta_registerNow((int)beSvPlatDataPS2_register);
}
void beSvPlatDataPS2_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beSvPlatDataPS2_meta,(int)beSvPlatBaseData_register,(int)fn_802BC428,(int)beSvPlatDataPS2_getMetaCall,(int)beSvPlatDataPS2_className,216,(int)beSvPlatDataPS2_vtableRead,(int)beSvPlatDataPS2_fieldInit,0,(int)beSvPlatDataPS2_dependencies);
}
void *beSvPlatDataPS2_getMetaCall(){return beSvPlatDataPS2_getMeta();}
}
#pragma pop
