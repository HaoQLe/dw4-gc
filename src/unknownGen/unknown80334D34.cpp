#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfo_register();
void *beNDMWSaveIntfInfo_getMeta();
void beNDMWSaveIntfInfo_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B2E3C();
void fn_803250AC();
void fn_80334F74();
extern char lbl_80453E7C[];
extern char lbl_80535FDC[];
extern void *lbl_80535FE0;
void beNDMWSaveIntfInfo_register();
void *beNDMWSaveIntfInfo_getMetaCall();
}
extern "C" {
void fn_80334D34(){
 fn_80066188((int)beNDMWSaveIntfInfo_register);
}
void beNDMWSaveIntfInfo_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535FDC,(int)beBaseInfo_register,(int)fn_802B2E3C,(int)beNDMWSaveIntfInfo_getMetaCall,(int)lbl_80453E7C,28,(int)beNDMWSaveIntfInfo_vtableRead,0,0,0);
}
void *beNDMWSaveIntfInfo_getMetaCall(){return beNDMWSaveIntfInfo_getMeta();}
void *beNDMWSaveIntfComMdlCtrl_getMeta(){
 if(!lbl_80535FE0 || !(reinterpret_cast<unsigned int *>(lbl_80535FE0)[0x24/4]&4)) fn_80334F74();
 return lbl_80535FE0;
}
}
#pragma pop
