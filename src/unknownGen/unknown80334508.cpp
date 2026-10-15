#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoRam_register();
void *beNDMWStageCtlInfoRam_getMeta();
void beNDMWStageCtlInfoRam_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B2B2C();
void fn_803250AC();
void beNDMWStageCtlInfo_arkRegister();
extern char beNDMWStageCtlInfoRam_className[];
extern char beNDMWStageCtlInfoRam_meta[];
extern void *beNDMWStageCtlInfo_meta;
void beNDMWStageCtlInfoRam_register();
void *beNDMWStageCtlInfoRam_getMetaCall();
}
extern "C" {
void beNDMWStageCtlInfoRam_arkRegister(){
 meta_registerNow((int)beNDMWStageCtlInfoRam_register);
}
void beNDMWStageCtlInfoRam_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWStageCtlInfoRam_meta,(int)beBaseInfoRam_register,(int)fn_802B2B2C,(int)beNDMWStageCtlInfoRam_getMetaCall,(int)beNDMWStageCtlInfoRam_className,44,(int)beNDMWStageCtlInfoRam_vtableRead,0,0,0);
}
void *beNDMWStageCtlInfoRam_getMetaCall(){return beNDMWStageCtlInfoRam_getMeta();}
void *beNDMWStageCtlInfo_getMeta(){
 if(!beNDMWStageCtlInfo_meta || !(reinterpret_cast<unsigned int *>(beNDMWStageCtlInfo_meta)[0x24/4]&4)) beNDMWStageCtlInfo_arkRegister();
 return beNDMWStageCtlInfo_meta;
}
}
#pragma pop
