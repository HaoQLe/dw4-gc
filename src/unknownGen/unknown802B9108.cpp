#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoManager_register();
void beSound_fieldInit();
void *beSound_getMeta();
void beSound_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B381C();
extern char lbl_8041D830[];
extern char lbl_804CF5F8[];
extern char lbl_80534774[];
void beSound_register();
void *beSound_getMetaCall();
}
extern "C" {
void fn_802B9108(){
 fn_80066188((int)beSound_register);
}
void beSound_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534774,(int)beBaseInfoManager_register,(int)fn_802B381C,(int)beSound_getMetaCall,(int)lbl_8041D830,44,(int)beSound_vtableRead,(int)beSound_fieldInit,0,(int)lbl_804CF5F8);
}
void *beSound_getMetaCall(){return beSound_getMeta();}
}
#pragma pop
