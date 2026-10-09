#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beLua_fieldInit();
void *beLua_getMeta();
void beLua_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_80284550();
void fn_802B1AC8();
void igInfoManager_register();
extern char lbl_8041FAFC[];
extern char lbl_804D1888[];
extern char lbl_80535124[];
void beLua_register();
void *beLua_getMetaCall();
}
extern "C" {
void fn_802D26A4(){
 fn_80066188((int)beLua_register);
}
void beLua_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535124,(int)igInfoManager_register,(int)fn_80284550,(int)beLua_getMetaCall,(int)lbl_8041FAFC,32,(int)beLua_vtableRead,(int)beLua_fieldInit,0,(int)lbl_804D1888);
}
void *beLua_getMetaCall(){return beLua_getMeta();}
}
#pragma pop
