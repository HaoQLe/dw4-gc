#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beSaveApi_register();
void beSvWriteMediaApi_fieldInit();
void *beSvWriteMediaApi_getMeta();
void beSvWriteMediaApi_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802BD764();
extern char beSvWriteMediaApi_className[];
extern char beSvWriteMediaApi_dependencies[];
extern char beSvWriteMediaApi_meta[];
void beSvWriteMediaApi_register();
void *beSvWriteMediaApi_getMetaCall();
}
extern "C" {
void beSvWriteMediaApi_arkRegister(){
 meta_registerNow((int)beSvWriteMediaApi_register);
}
void beSvWriteMediaApi_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beSvWriteMediaApi_meta,(int)beSaveApi_register,(int)fn_802BD764,(int)beSvWriteMediaApi_getMetaCall,(int)beSvWriteMediaApi_className,224,(int)beSvWriteMediaApi_vtableRead,(int)beSvWriteMediaApi_fieldInit,0,(int)beSvWriteMediaApi_dependencies);
}
void *beSvWriteMediaApi_getMetaCall(){return beSvWriteMediaApi_getMeta();}
}
#pragma pop
