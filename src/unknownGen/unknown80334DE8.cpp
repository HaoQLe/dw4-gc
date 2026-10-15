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
void *beNDMWSaveIntfComMdlCtrl_getMeta(){
 if(!beNDMWSaveIntfComMdlCtrl_meta || !(reinterpret_cast<unsigned int *>(beNDMWSaveIntfComMdlCtrl_meta)[0x24/4]&4)) beNDMWSaveIntfComMdlCtrl_arkRegister();
 return beNDMWSaveIntfComMdlCtrl_meta;
}
}
#pragma pop
