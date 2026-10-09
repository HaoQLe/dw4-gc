#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfo_register();
void *beNDMWLoadIntf2Info_getMeta();
void beNDMWLoadIntf2Info_vtableRead();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B2E3C();
void fn_803250AC();
void fn_8033C534();
extern char lbl_80454810[];
extern char lbl_80536288[];
extern void *lbl_8053628C;
void beNDMWLoadIntf2Info_register();
void *beNDMWLoadIntf2Info_getMetaCall();
}
extern "C" {
void fn_8033C344(){
 fn_80066188((int)beNDMWLoadIntf2Info_register);
}
void beNDMWLoadIntf2Info_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536288,(int)beBaseInfo_register,(int)fn_802B2E3C,(int)beNDMWLoadIntf2Info_getMetaCall,(int)lbl_80454810,28,(int)beNDMWLoadIntf2Info_vtableRead,0,0,0);
}
void *beNDMWLoadIntf2Info_getMetaCall(){return beNDMWLoadIntf2Info_getMeta();}
void *fn_8033C3F8(void *object){
 fn_8033C534();
 return fn_8006546C(lbl_8053628C,object);
}
void *beNDMWLoadIntf2NameSel_getMeta(){
 if(!lbl_8053628C || !(reinterpret_cast<unsigned int *>(lbl_8053628C)[0x24/4]&4)) fn_8033C534();
 return lbl_8053628C;
}
}
#pragma pop
