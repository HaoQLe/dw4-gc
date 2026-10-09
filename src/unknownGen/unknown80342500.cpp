#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWItemBase_register();
void beNDMWItemWaza_fieldInit();
void *beNDMWItemWaza_getMeta();
void beNDMWItemWaza_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_803425BC();
extern char lbl_80455108[];
extern char lbl_80536728[];
void beNDMWItemWaza_register();
void *beNDMWItemWaza_getMetaCall();
}
extern "C" {
void fn_80342500(){
 fn_80066188((int)beNDMWItemWaza_register);
}
void beNDMWItemWaza_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536728,(int)beNDMWItemBase_register,(int)fn_803425BC,(int)beNDMWItemWaza_getMetaCall,(int)lbl_80455108,24,(int)beNDMWItemWaza_vtableRead,(int)beNDMWItemWaza_fieldInit,0,0);
}
void *beNDMWItemWaza_getMetaCall(){return beNDMWItemWaza_getMeta();}
}
#pragma pop
