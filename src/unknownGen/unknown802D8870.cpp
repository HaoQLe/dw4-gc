#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoManager_register();
void beGenerater_fieldInit();
void *beGenerater_getMeta();
void beGenerater_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B381C();
extern char lbl_80420214[];
extern char lbl_804D1F70[];
extern char lbl_80535304[];
void beGenerater_register();
void *beGenerater_getMetaCall();
}
extern "C" {
void fn_802D8870(){
 fn_80066188((int)beGenerater_register);
}
void beGenerater_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535304,(int)beBaseInfoManager_register,(int)fn_802B381C,(int)beGenerater_getMetaCall,(int)lbl_80420214,40,(int)beGenerater_vtableRead,(int)beGenerater_fieldInit,0,(int)lbl_804D1F70);
}
void *beGenerater_getMetaCall(){return beGenerater_getMeta();}
}
#pragma pop
