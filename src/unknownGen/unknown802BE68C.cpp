#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beSaveApi_register();
void beSvReadMediaApi_fieldInit();
void *beSvReadMediaApi_getMeta();
void beSvReadMediaApi_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802BD764();
extern char lbl_8041DFE8[];
extern char lbl_804CFC20[];
extern char lbl_8053493C[];
void beSvReadMediaApi_register();
void *beSvReadMediaApi_getMetaCall();
}
extern "C" {
void fn_802BE68C(){
 fn_80066188((int)beSvReadMediaApi_register);
}
void beSvReadMediaApi_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_8053493C,(int)beSaveApi_register,(int)fn_802BD764,(int)beSvReadMediaApi_getMetaCall,(int)lbl_8041DFE8,236,(int)beSvReadMediaApi_vtableRead,(int)beSvReadMediaApi_fieldInit,0,(int)lbl_804CFC20);
}
void *beSvReadMediaApi_getMetaCall(){return beSvReadMediaApi_getMeta();}
}
#pragma pop
