#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfo_register();
void *beNDMWStatusInfo_getMeta();
void beNDMWStatusInfo_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B2E3C();
void fn_803250AC();
void beNDMWStatusInfoRam_registerNow();
extern char beNDMWStatusInfo_className[];
extern char beNDMWStatusInfo_meta[];
extern void *beNDMWStatusInfoRam_meta;
void beNDMWStatusInfo_register();
void *beNDMWStatusInfo_getMetaCall();
}
extern "C" {
void beNDMWStatusInfo_registerNow(){
 meta_registerNow((int)beNDMWStatusInfo_register);
}
void beNDMWStatusInfo_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWStatusInfo_meta,(int)beBaseInfo_register,(int)fn_802B2E3C,(int)beNDMWStatusInfo_getMetaCall,(int)beNDMWStatusInfo_className,28,(int)beNDMWStatusInfo_vtableRead,0,0,0);
}
void *beNDMWStatusInfo_getMetaCall(){return beNDMWStatusInfo_getMeta();}
void *beNDMWStatusInfoRam_getMeta(){
 if(!beNDMWStatusInfoRam_meta || !(reinterpret_cast<unsigned int *>(beNDMWStatusInfoRam_meta)[0x24/4]&4)) beNDMWStatusInfoRam_registerNow();
 return beNDMWStatusInfoRam_meta;
}
}
#pragma pop
