#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfo_register();
void *beNDMWPanelWazaInfo_getMeta();
void beNDMWPanelWazaInfo_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B2E3C();
void fn_803250AC();
void fn_80336A6C();
extern char lbl_8045408C[];
extern char lbl_80536098[];
extern void *lbl_8053609C;
void beNDMWPanelWazaInfo_register();
void *beNDMWPanelWazaInfo_getMetaCall();
}
extern "C" {
void fn_80336814(){
 fn_80066188((int)beNDMWPanelWazaInfo_register);
}
void beNDMWPanelWazaInfo_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536098,(int)beBaseInfo_register,(int)fn_802B2E3C,(int)beNDMWPanelWazaInfo_getMetaCall,(int)lbl_8045408C,28,(int)beNDMWPanelWazaInfo_vtableRead,0,0,0);
}
void *beNDMWPanelWazaInfo_getMetaCall(){return beNDMWPanelWazaInfo_getMeta();}
void *beNDMWPanelWazaInfoRam_getMeta(){
 if(!lbl_8053609C || !(reinterpret_cast<unsigned int *>(lbl_8053609C)[0x24/4]&4)) fn_80336A6C();
 return lbl_8053609C;
}
}
#pragma pop
