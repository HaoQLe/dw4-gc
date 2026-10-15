#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoRam_register();
void *beNDMWGameRamInfoRam_getMeta();
void beNDMWGameRamInfoRam_vtableRead();
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B2B2C();
void fn_803250AC();
void beNDMWGameRamInfo_registerNow();
extern char beNDMWGameRamInfoRam_className[];
extern char beNDMWGameRamInfoRam_meta[];
extern void *beNDMWGameRamInfo_meta;
void beNDMWGameRamInfoRam_register();
void *beNDMWGameRamInfoRam_getMetaCall();
}
extern "C" {
void beNDMWGameRamInfoRam_registerNow(){
 meta_registerNow((int)beNDMWGameRamInfoRam_register);
}
void beNDMWGameRamInfoRam_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWGameRamInfoRam_meta,(int)beBaseInfoRam_register,(int)fn_802B2B2C,(int)beNDMWGameRamInfoRam_getMetaCall,(int)beNDMWGameRamInfoRam_className,44,(int)beNDMWGameRamInfoRam_vtableRead,0,0,0);
}
void *beNDMWGameRamInfoRam_getMetaCall(){return beNDMWGameRamInfoRam_getMeta();}
void *beNDMWGameRamInfo_create(void *object){
 beNDMWGameRamInfo_registerNow();
 return meta_createInstance(beNDMWGameRamInfo_meta,object);
}
void *beNDMWGameRamInfo_getMeta(){
 if(!beNDMWGameRamInfo_meta || !(reinterpret_cast<unsigned int *>(beNDMWGameRamInfo_meta)[0x24/4]&4)) beNDMWGameRamInfo_registerNow();
 return beNDMWGameRamInfo_meta;
}
}
#pragma pop
