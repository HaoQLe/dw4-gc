#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoRam_register();
void *beNDMWGameRamInfoRam_getMeta();
void beNDMWGameRamInfoRam_vtableRead();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B2B2C();
void fn_803250AC();
void fn_80344D40();
extern char lbl_8045563C[];
extern char lbl_80536820[];
extern void *lbl_80536824;
void beNDMWGameRamInfoRam_register();
void *beNDMWGameRamInfoRam_getMetaCall();
}
extern "C" {
void fn_80344AB0(){
 fn_80066188((int)beNDMWGameRamInfoRam_register);
}
void beNDMWGameRamInfoRam_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536820,(int)beBaseInfoRam_register,(int)fn_802B2B2C,(int)beNDMWGameRamInfoRam_getMetaCall,(int)lbl_8045563C,44,(int)beNDMWGameRamInfoRam_vtableRead,0,0,0);
}
void *beNDMWGameRamInfoRam_getMetaCall(){return beNDMWGameRamInfoRam_getMeta();}
void *fn_80344B64(void *object){
 fn_80344D40();
 return fn_8006546C(lbl_80536824,object);
}
void *beNDMWGameRamInfo_getMeta(){
 if(!lbl_80536824 || !(reinterpret_cast<unsigned int *>(lbl_80536824)[0x24/4]&4)) fn_80344D40();
 return lbl_80536824;
}
}
#pragma pop
