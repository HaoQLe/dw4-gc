#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoRam_register();
void *beNDMWStageCtlInfoRam_getMeta();
void beNDMWStageCtlInfoRam_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B2B2C();
void fn_803250AC();
void fn_80334758();
extern char lbl_80453E08[];
extern char lbl_80535FC8[];
extern void *lbl_80535FCC;
void beNDMWStageCtlInfoRam_register();
void *beNDMWStageCtlInfoRam_getMetaCall();
}
extern "C" {
void fn_80334508(){
 fn_80066188((int)beNDMWStageCtlInfoRam_register);
}
void beNDMWStageCtlInfoRam_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535FC8,(int)beBaseInfoRam_register,(int)fn_802B2B2C,(int)beNDMWStageCtlInfoRam_getMetaCall,(int)lbl_80453E08,44,(int)beNDMWStageCtlInfoRam_vtableRead,0,0,0);
}
void *beNDMWStageCtlInfoRam_getMetaCall(){return beNDMWStageCtlInfoRam_getMeta();}
void *beNDMWStageCtlInfo_getMeta(){
 if(!lbl_80535FCC || !(reinterpret_cast<unsigned int *>(lbl_80535FCC)[0x24/4]&4)) fn_80334758();
 return lbl_80535FCC;
}
}
#pragma pop
