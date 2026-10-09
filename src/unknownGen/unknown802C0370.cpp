#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beSaveDataDeliver_fieldInit();
void *beSaveDataDeliver_getMeta();
void beSaveDataDeliver_vtableRead();
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igObject_register();
extern char lbl_8041E2DC[];
extern char lbl_805349F8[];
void beSaveDataDeliver_register();
void *beSaveDataDeliver_getMetaCall();
}
extern "C" {
void fn_802C0370(){
 fn_80066188((int)beSaveDataDeliver_register);
}
void beSaveDataDeliver_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805349F8,(int)igObject_register,(int)fn_800237D0,(int)beSaveDataDeliver_getMetaCall,(int)lbl_8041E2DC,16,(int)beSaveDataDeliver_vtableRead,(int)beSaveDataDeliver_fieldInit,0,0);
}
void *beSaveDataDeliver_getMetaCall(){return beSaveDataDeliver_getMeta();}
}
#pragma pop
