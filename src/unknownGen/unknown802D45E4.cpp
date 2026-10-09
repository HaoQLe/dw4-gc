#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoRam_register();
void *beHitLandModelInfoRam_getMeta();
void beHitLandModelInfoRam_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2B2C();
void fn_802D48D4();
extern char lbl_8041FCCC[];
extern char lbl_805351A8[];
extern void *lbl_805351AC;
void beHitLandModelInfoRam_register();
void *beHitLandModelInfoRam_getMetaCall();
}
extern "C" {
void fn_802D45E4(){
 fn_80066188((int)beHitLandModelInfoRam_register);
}
void beHitLandModelInfoRam_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805351A8,(int)beBaseInfoRam_register,(int)fn_802B2B2C,(int)beHitLandModelInfoRam_getMetaCall,(int)lbl_8041FCCC,44,(int)beHitLandModelInfoRam_vtableRead,0,0,0);
}
void *beHitLandModelInfoRam_getMetaCall(){return beHitLandModelInfoRam_getMeta();}
void *beHitLandModelInfo_getMeta(){
 if(!lbl_805351AC || !(reinterpret_cast<unsigned int *>(lbl_805351AC)[0x24/4]&4)) fn_802D48D4();
 return lbl_805351AC;
}
}
#pragma pop
