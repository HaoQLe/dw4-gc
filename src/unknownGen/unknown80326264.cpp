#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoData_register();
void beNDMWTitle2Option_fieldInit();
void *beNDMWTitle2Option_getMeta();
void beNDMWTitle2Option_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B8770();
void fn_803250AC();
extern char lbl_80453340[];
extern char lbl_804E1844[];
extern char lbl_80535CD0[];
void beNDMWTitle2Option_register();
void *beNDMWTitle2Option_getMetaCall();
}
extern "C" {
void fn_80326264(){
 fn_80066188((int)beNDMWTitle2Option_register);
}
void beNDMWTitle2Option_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535CD0,(int)beBaseInfoData_register,(int)fn_802B8770,(int)beNDMWTitle2Option_getMetaCall,(int)lbl_80453340,56,(int)beNDMWTitle2Option_vtableRead,(int)beNDMWTitle2Option_fieldInit,0,(int)lbl_804E1844);
}
void *beNDMWTitle2Option_getMetaCall(){return beNDMWTitle2Option_getMeta();}
}
#pragma pop
