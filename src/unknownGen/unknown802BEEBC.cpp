#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beSaveApi_register();
void *beSvFileFindApi_getMeta();
void beSvFileFindApi_vtableRead();
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802BD764();
void beSvFileMakeApi_registerNow();
extern char beSvFileFindApi_className[];
extern char beSvFileFindApi_meta[];
extern void *beSvFileMakeApi_meta;
void beSvFileFindApi_register();
void *beSvFileFindApi_getMetaCall();
}
extern "C" {
void beSvFileFindApi_registerNow(){
 meta_registerNow((int)beSvFileFindApi_register);
}
void beSvFileFindApi_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beSvFileFindApi_meta,(int)beSaveApi_register,(int)fn_802BD764,(int)beSvFileFindApi_getMetaCall,(int)beSvFileFindApi_className,212,(int)beSvFileFindApi_vtableRead,0,0,0);
}
void *beSvFileFindApi_getMetaCall(){return beSvFileFindApi_getMeta();}
void *beSvFileMakeApi_create(void *object){
 beSvFileMakeApi_registerNow();
 return meta_createInstance(beSvFileMakeApi_meta,object);
}
void *beSvFileMakeApi_getMeta(){
 if(!beSvFileMakeApi_meta || !(reinterpret_cast<unsigned int *>(beSvFileMakeApi_meta)[0x24/4]&4)) beSvFileMakeApi_registerNow();
 return beSvFileMakeApi_meta;
}
}
#pragma pop
