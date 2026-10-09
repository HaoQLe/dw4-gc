#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfo_register();
void *beNDMWSaveCtrlInfo_getMeta();
void beNDMWSaveCtrlInfo_vtableRead();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B2E3C();
void fn_803250AC();
void fn_803360A0();
extern char lbl_8045400C[];
extern char lbl_80536064[];
extern void *lbl_80536068;
void beNDMWSaveCtrlInfo_register();
void *beNDMWSaveCtrlInfo_getMetaCall();
}
extern "C" {
void fn_80335EB0(){
 fn_80066188((int)beNDMWSaveCtrlInfo_register);
}
void beNDMWSaveCtrlInfo_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536064,(int)beBaseInfo_register,(int)fn_802B2E3C,(int)beNDMWSaveCtrlInfo_getMetaCall,(int)lbl_8045400C,28,(int)beNDMWSaveCtrlInfo_vtableRead,0,0,0);
}
void *beNDMWSaveCtrlInfo_getMetaCall(){return beNDMWSaveCtrlInfo_getMeta();}
void *fn_80335F64(void *object){
 fn_803360A0();
 return fn_8006546C(lbl_80536068,object);
}
void *beNDMWSaveCtrlCtrlData_getMeta(){
 if(!lbl_80536068 || !(reinterpret_cast<unsigned int *>(lbl_80536068)[0x24/4]&4)) fn_803360A0();
 return lbl_80536068;
}
}
#pragma pop
