#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfo_register();
void *beNDMWGameRamInfo_getMeta();
void beNDMWGameRamInfo_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B2E3C();
void fn_803250AC();
void fn_80344F80();
extern char lbl_80455654[];
extern char lbl_80536824[];
extern void *lbl_80536828;
void beNDMWGameRamInfo_register();
void *beNDMWGameRamInfo_getMetaCall();
}
extern "C" {
void fn_80344D40(){
 fn_80066188((int)beNDMWGameRamInfo_register);
}
void beNDMWGameRamInfo_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536824,(int)beBaseInfo_register,(int)fn_802B2E3C,(int)beNDMWGameRamInfo_getMetaCall,(int)lbl_80455654,28,(int)beNDMWGameRamInfo_vtableRead,0,0,0);
}
void *beNDMWGameRamInfo_getMetaCall(){return beNDMWGameRamInfo_getMeta();}
void *beNDMWAfsSetupInfo_getMeta(){
 if(!lbl_80536828 || !(reinterpret_cast<unsigned int *>(lbl_80536828)[0x24/4]&4)) fn_80344F80();
 return lbl_80536828;
}
}
#pragma pop
