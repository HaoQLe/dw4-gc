#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beSaveApi_register();
void beSvFileMakeApi_fieldInit();
void *beSvFileMakeApi_getMeta();
void beSvFileMakeApi_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802BD764();
extern char beSvFileMakeApi_className[];
extern char lbl_804CFC80[];
extern char beSvFileMakeApi_meta[];
void beSvFileMakeApi_register();
void *beSvFileMakeApi_getMetaCall();
}
extern "C" {
void beSvFileMakeApi_registerNow(){
 meta_registerNow((int)beSvFileMakeApi_register);
}
void beSvFileMakeApi_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beSvFileMakeApi_meta,(int)beSaveApi_register,(int)fn_802BD764,(int)beSvFileMakeApi_getMetaCall,(int)beSvFileMakeApi_className,224,(int)beSvFileMakeApi_vtableRead,(int)beSvFileMakeApi_fieldInit,0,(int)lbl_804CFC80);
}
void *beSvFileMakeApi_getMetaCall(){return beSvFileMakeApi_getMeta();}
}
#pragma pop
