#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfo_register();
void *beNDMWSaveIntfInfo_getMeta();
void beNDMWSaveIntfInfo_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B2E3C();
void fn_803250AC();
void beNDMWSaveIntfComMdlCtrl_arkRegister();
extern char beNDMWSaveIntfInfo_className[];
extern char beNDMWSaveIntfInfo_meta[];
extern void *beNDMWSaveIntfComMdlCtrl_meta;
void beNDMWSaveIntfInfo_register();
void *beNDMWSaveIntfInfo_getMetaCall();
}
extern "C" {
void beNDMWSaveIntfInfo_arkRegister(){
 meta_registerNow((int)beNDMWSaveIntfInfo_register);
}
void beNDMWSaveIntfInfo_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWSaveIntfInfo_meta,(int)beBaseInfo_register,(int)fn_802B2E3C,(int)beNDMWSaveIntfInfo_getMetaCall,(int)beNDMWSaveIntfInfo_className,28,(int)beNDMWSaveIntfInfo_vtableRead,0,0,0);
}
void *beNDMWSaveIntfInfo_getMetaCall(){return beNDMWSaveIntfInfo_getMeta();}
void *beNDMWSaveIntfComMdlCtrl_getMeta(){
 if(!beNDMWSaveIntfComMdlCtrl_meta || !(reinterpret_cast<unsigned int *>(beNDMWSaveIntfComMdlCtrl_meta)[0x24/4]&4)) beNDMWSaveIntfComMdlCtrl_arkRegister();
 return beNDMWSaveIntfComMdlCtrl_meta;
}
}
#pragma pop
