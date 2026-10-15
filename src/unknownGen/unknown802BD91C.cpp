#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beSaveApi_register();
void *beSvEndApi_getMeta();
void beSvEndApi_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802BD764();
void fn_802BD9D8();
extern char beSvEndApi_className[];
extern char beSvEndApi_meta[];
void beSvEndApi_register();
void *beSvEndApi_getMetaCall();
}
extern "C" {
void beSvEndApi_arkRegister(){
 meta_registerNow((int)beSvEndApi_register);
}
void beSvEndApi_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beSvEndApi_meta,(int)beSaveApi_register,(int)fn_802BD764,(int)beSvEndApi_getMetaCall,(int)beSvEndApi_className,212,(int)beSvEndApi_vtableRead,(int)fn_802BD9D8,0,0);
}
void *beSvEndApi_getMetaCall(){return beSvEndApi_getMeta();}
}
#pragma pop
