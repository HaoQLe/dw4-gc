#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beSaveApi_register();
void *beSvStartApi_getMeta();
void beSvStartApi_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802BD764();
void fn_802BDD08();
extern char lbl_8041DF70[];
extern char lbl_80534918[];
void beSvStartApi_register();
void *beSvStartApi_getMetaCall();
}
extern "C" {
void fn_802BDC4C(){
 fn_80066188((int)beSvStartApi_register);
}
void beSvStartApi_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534918,(int)beSaveApi_register,(int)fn_802BD764,(int)beSvStartApi_getMetaCall,(int)lbl_8041DF70,212,(int)beSvStartApi_vtableRead,(int)fn_802BDD08,0,0);
}
void *beSvStartApi_getMetaCall(){return beSvStartApi_getMeta();}
}
#pragma pop
