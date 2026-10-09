#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beSaveApi_register();
void beSvWriteMediaApi_fieldInit();
void *beSvWriteMediaApi_getMeta();
void beSvWriteMediaApi_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802BD764();
extern char lbl_8041DFB8[];
extern char lbl_804CFBF4[];
extern char lbl_80534930[];
void beSvWriteMediaApi_register();
void *beSvWriteMediaApi_getMetaCall();
}
extern "C" {
void fn_802BE2C8(){
 fn_80066188((int)beSvWriteMediaApi_register);
}
void beSvWriteMediaApi_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534930,(int)beSaveApi_register,(int)fn_802BD764,(int)beSvWriteMediaApi_getMetaCall,(int)lbl_8041DFB8,224,(int)beSvWriteMediaApi_vtableRead,(int)beSvWriteMediaApi_fieldInit,0,(int)lbl_804CFBF4);
}
void *beSvWriteMediaApi_getMetaCall(){return beSvWriteMediaApi_getMeta();}
}
#pragma pop
