#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfo_register();
void *beNDMWStatusInfo_getMeta();
void beNDMWStatusInfo_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B2E3C();
void fn_803250AC();
void fn_8032AE54();
extern char lbl_804536B4[];
extern char lbl_80535DBC[];
extern void *lbl_80535DC0;
void beNDMWStatusInfo_register();
void *beNDMWStatusInfo_getMetaCall();
}
extern "C" {
void fn_8032ABFC(){
 fn_80066188((int)beNDMWStatusInfo_register);
}
void beNDMWStatusInfo_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535DBC,(int)beBaseInfo_register,(int)fn_802B2E3C,(int)beNDMWStatusInfo_getMetaCall,(int)lbl_804536B4,28,(int)beNDMWStatusInfo_vtableRead,0,0,0);
}
void *beNDMWStatusInfo_getMetaCall(){return beNDMWStatusInfo_getMeta();}
void *beNDMWStatusInfoRam_getMeta(){
 if(!lbl_80535DC0 || !(reinterpret_cast<unsigned int *>(lbl_80535DC0)[0x24/4]&4)) fn_8032AE54();
 return lbl_80535DC0;
}
}
#pragma pop
