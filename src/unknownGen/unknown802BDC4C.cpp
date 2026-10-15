#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beSaveApi_register();
void *beSvStartApi_getMeta();
void beSvStartApi_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802BD764();
void fn_802BDD08();
extern char beSvStartApi_className[];
extern char beSvStartApi_meta[];
void beSvStartApi_register();
void *beSvStartApi_getMetaCall();
}
extern "C" {
void beSvStartApi_registerNow(){
 meta_registerNow((int)beSvStartApi_register);
}
void beSvStartApi_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beSvStartApi_meta,(int)beSaveApi_register,(int)fn_802BD764,(int)beSvStartApi_getMetaCall,(int)beSvStartApi_className,212,(int)beSvStartApi_vtableRead,(int)fn_802BDD08,0,0);
}
void *beSvStartApi_getMetaCall(){return beSvStartApi_getMeta();}
}
#pragma pop
