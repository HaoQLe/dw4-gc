#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beSaveApi_register();
void beSvReadMediaApi_fieldInit();
void *beSvReadMediaApi_getMeta();
void beSvReadMediaApi_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802BD764();
extern char beSvReadMediaApi_className[];
extern char beSvReadMediaApi_dependencies[];
extern char beSvReadMediaApi_meta[];
void beSvReadMediaApi_register();
void *beSvReadMediaApi_getMetaCall();
}
extern "C" {
void beSvReadMediaApi_arkRegister(){
 meta_registerNow((int)beSvReadMediaApi_register);
}
void beSvReadMediaApi_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beSvReadMediaApi_meta,(int)beSaveApi_register,(int)fn_802BD764,(int)beSvReadMediaApi_getMetaCall,(int)beSvReadMediaApi_className,236,(int)beSvReadMediaApi_vtableRead,(int)beSvReadMediaApi_fieldInit,0,(int)beSvReadMediaApi_dependencies);
}
void *beSvReadMediaApi_getMetaCall(){return beSvReadMediaApi_getMeta();}
}
#pragma pop
