#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfo_register();
void *beNDMWLogoInfo_getMeta();
void beNDMWLogoInfo_vtableRead();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B2E3C();
void fn_803250AC();
void fn_8033BB68();
extern char lbl_80454790[];
extern char lbl_80536238[];
extern void *lbl_8053623C;
void beNDMWLogoInfo_register();
void *beNDMWLogoInfo_getMetaCall();
}
extern "C" {
void fn_8033B978(){
 fn_80066188((int)beNDMWLogoInfo_register);
}
void beNDMWLogoInfo_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536238,(int)beBaseInfo_register,(int)fn_802B2E3C,(int)beNDMWLogoInfo_getMetaCall,(int)lbl_80454790,28,(int)beNDMWLogoInfo_vtableRead,0,0,0);
}
void *beNDMWLogoInfo_getMetaCall(){return beNDMWLogoInfo_getMeta();}
void *fn_8033BA2C(void *object){
 fn_8033BB68();
 return fn_8006546C(lbl_8053623C,object);
}
void *beNDMWLogoCtrlData_getMeta(){
 if(!lbl_8053623C || !(reinterpret_cast<unsigned int *>(lbl_8053623C)[0x24/4]&4)) fn_8033BB68();
 return lbl_8053623C;
}
}
#pragma pop
