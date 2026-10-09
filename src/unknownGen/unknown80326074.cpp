#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfo_register();
void *beNDMWTitle2Info_getMeta();
void beNDMWTitle2Info_vtableRead();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B2E3C();
void fn_803250AC();
void fn_80326264();
extern char lbl_8045332C[];
extern char lbl_80535CCC[];
extern void *lbl_80535CD0;
void beNDMWTitle2Info_register();
void *beNDMWTitle2Info_getMetaCall();
}
extern "C" {
void fn_80326074(){
 fn_80066188((int)beNDMWTitle2Info_register);
}
void beNDMWTitle2Info_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535CCC,(int)beBaseInfo_register,(int)fn_802B2E3C,(int)beNDMWTitle2Info_getMetaCall,(int)lbl_8045332C,28,(int)beNDMWTitle2Info_vtableRead,0,0,0);
}
void *beNDMWTitle2Info_getMetaCall(){return beNDMWTitle2Info_getMeta();}
void *fn_80326128(void *object){
 fn_80326264();
 return fn_8006546C(lbl_80535CD0,object);
}
void *beNDMWTitle2Option_getMeta(){
 if(!lbl_80535CD0 || !(reinterpret_cast<unsigned int *>(lbl_80535CD0)[0x24/4]&4)) fn_80326264();
 return lbl_80535CD0;
}
}
#pragma pop
