#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beSaveApi_register();
void *beSvFormatApi_getMeta();
void beSvFormatApi_vtableRead();
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802BD764();
void beSvFileFindApi_arkRegister();
extern char beSvFormatApi_className[];
extern char beSvFormatApi_meta[];
extern void *beSvFileFindApi_meta;
void beSvFormatApi_register();
void *beSvFormatApi_getMetaCall();
}
extern "C" {
void beSvFormatApi_arkRegister(){
 meta_registerNow((int)beSvFormatApi_register);
}
void beSvFormatApi_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beSvFormatApi_meta,(int)beSaveApi_register,(int)fn_802BD764,(int)beSvFormatApi_getMetaCall,(int)beSvFormatApi_className,212,(int)beSvFormatApi_vtableRead,0,0,0);
}
void *beSvFormatApi_getMetaCall(){return beSvFormatApi_getMeta();}
void *beSvFileFindApi_create(void *object){
 beSvFileFindApi_arkRegister();
 return meta_createInstance(beSvFileFindApi_meta,object);
}
void *beSvFileFindApi_getMeta(){
 if(!beSvFileFindApi_meta || !(reinterpret_cast<unsigned int *>(beSvFileFindApi_meta)[0x24/4]&4)) beSvFileFindApi_arkRegister();
 return beSvFileFindApi_meta;
}
}
#pragma pop
