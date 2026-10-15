#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoData_register();
void beNDMWTitle2Option_fieldInit();
void *beNDMWTitle2Option_getMeta();
void beNDMWTitle2Option_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B8770();
void fn_803250AC();
extern char beNDMWTitle2Option_className[];
extern char lbl_804E1844[];
extern char beNDMWTitle2Option_meta[];
void beNDMWTitle2Option_register();
void *beNDMWTitle2Option_getMetaCall();
}
extern "C" {
void beNDMWTitle2Option_registerNow(){
 meta_registerNow((int)beNDMWTitle2Option_register);
}
void beNDMWTitle2Option_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWTitle2Option_meta,(int)beBaseInfoData_register,(int)fn_802B8770,(int)beNDMWTitle2Option_getMetaCall,(int)beNDMWTitle2Option_className,56,(int)beNDMWTitle2Option_vtableRead,(int)beNDMWTitle2Option_fieldInit,0,(int)lbl_804E1844);
}
void *beNDMWTitle2Option_getMetaCall(){return beNDMWTitle2Option_getMeta();}
}
#pragma pop
