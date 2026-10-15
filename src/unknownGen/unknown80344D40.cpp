#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfo_register();
void *beNDMWGameRamInfo_getMeta();
void beNDMWGameRamInfo_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B2E3C();
void fn_803250AC();
void beNDMWAfsSetupInfo_registerNow();
extern char beNDMWGameRamInfo_className[];
extern char beNDMWGameRamInfo_meta[];
extern void *beNDMWAfsSetupInfo_meta;
void beNDMWGameRamInfo_register();
void *beNDMWGameRamInfo_getMetaCall();
}
extern "C" {
void beNDMWGameRamInfo_registerNow(){
 meta_registerNow((int)beNDMWGameRamInfo_register);
}
void beNDMWGameRamInfo_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWGameRamInfo_meta,(int)beBaseInfo_register,(int)fn_802B2E3C,(int)beNDMWGameRamInfo_getMetaCall,(int)beNDMWGameRamInfo_className,28,(int)beNDMWGameRamInfo_vtableRead,0,0,0);
}
void *beNDMWGameRamInfo_getMetaCall(){return beNDMWGameRamInfo_getMeta();}
void *beNDMWAfsSetupInfo_getMeta(){
 if(!beNDMWAfsSetupInfo_meta || !(reinterpret_cast<unsigned int *>(beNDMWAfsSetupInfo_meta)[0x24/4]&4)) beNDMWAfsSetupInfo_registerNow();
 return beNDMWAfsSetupInfo_meta;
}
}
#pragma pop
