#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfo_register();
void *beNDMWPanelWazaInfo_getMeta();
void beNDMWPanelWazaInfo_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B2E3C();
void fn_803250AC();
void beNDMWPanelWazaInfoRam_arkRegister();
extern char beNDMWPanelWazaInfo_className[];
extern char beNDMWPanelWazaInfo_meta[];
extern void *beNDMWPanelWazaInfoRam_meta;
void beNDMWPanelWazaInfo_register();
void *beNDMWPanelWazaInfo_getMetaCall();
}
extern "C" {
void beNDMWPanelWazaInfo_arkRegister(){
 meta_registerNow((int)beNDMWPanelWazaInfo_register);
}
void beNDMWPanelWazaInfo_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWPanelWazaInfo_meta,(int)beBaseInfo_register,(int)fn_802B2E3C,(int)beNDMWPanelWazaInfo_getMetaCall,(int)beNDMWPanelWazaInfo_className,28,(int)beNDMWPanelWazaInfo_vtableRead,0,0,0);
}
void *beNDMWPanelWazaInfo_getMetaCall(){return beNDMWPanelWazaInfo_getMeta();}
void *beNDMWPanelWazaInfoRam_getMeta(){
 if(!beNDMWPanelWazaInfoRam_meta || !(reinterpret_cast<unsigned int *>(beNDMWPanelWazaInfoRam_meta)[0x24/4]&4)) beNDMWPanelWazaInfoRam_arkRegister();
 return beNDMWPanelWazaInfoRam_meta;
}
}
#pragma pop
