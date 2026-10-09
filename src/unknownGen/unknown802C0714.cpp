#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beSvDeliver_fieldInit();
void *beSvDeliver_getMeta();
void beSvDeliver_vtableRead();
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igObject_register();
extern char lbl_8041E2F8[];
extern char lbl_804CFE94[];
extern char lbl_80534A04[];
void beSvDeliver_register();
void *beSvDeliver_getMetaCall();
}
extern "C" {
void fn_802C0714(){
 fn_80066188((int)beSvDeliver_register);
}
void beSvDeliver_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534A04,(int)igObject_register,(int)fn_800237D0,(int)beSvDeliver_getMetaCall,(int)lbl_8041E2F8,68,(int)beSvDeliver_vtableRead,(int)beSvDeliver_fieldInit,0,(int)lbl_804CFE94);
}
void *beSvDeliver_getMetaCall(){return beSvDeliver_getMeta();}
}
#pragma pop
