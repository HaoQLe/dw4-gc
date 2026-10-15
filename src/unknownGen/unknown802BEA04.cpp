#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beSaveApi_register();
void *beSvUseCheckApi_getMeta();
void beSvUseCheckApi_vtableRead();
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802BD764();
void beSvFormatApi_registerNow();
extern char beSvUseCheckApi_className[];
extern char beSvUseCheckApi_meta[];
extern void *beSvFormatApi_meta;
void beSvUseCheckApi_register();
void *beSvUseCheckApi_getMetaCall();
}
extern "C" {
void beSvUseCheckApi_registerNow(){
 meta_registerNow((int)beSvUseCheckApi_register);
}
void beSvUseCheckApi_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beSvUseCheckApi_meta,(int)beSaveApi_register,(int)fn_802BD764,(int)beSvUseCheckApi_getMetaCall,(int)beSvUseCheckApi_className,212,(int)beSvUseCheckApi_vtableRead,0,0,0);
}
void *beSvUseCheckApi_getMetaCall(){return beSvUseCheckApi_getMeta();}
void *beSvFormatApi_create(void *object){
 beSvFormatApi_registerNow();
 return meta_createInstance(beSvFormatApi_meta,object);
}
void *beSvFormatApi_getMeta(){
 if(!beSvFormatApi_meta || !(reinterpret_cast<unsigned int *>(beSvFormatApi_meta)[0x24/4]&4)) beSvFormatApi_registerNow();
 return beSvFormatApi_meta;
}
}
#pragma pop
