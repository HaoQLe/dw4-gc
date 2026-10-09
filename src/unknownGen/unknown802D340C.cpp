#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfo_register();
void beLayerInfo_fieldInit();
void *beLayerInfo_getMeta();
void beLayerInfo_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2E3C();
extern char lbl_8041FB80[];
extern char lbl_804D1904[];
extern char lbl_80535150[];
void beLayerInfo_register();
void *beLayerInfo_getMetaCall();
}
extern "C" {
void fn_802D340C(){
 fn_80066188((int)beLayerInfo_register);
}
void beLayerInfo_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535150,(int)beBaseInfo_register,(int)fn_802B2E3C,(int)beLayerInfo_getMetaCall,(int)lbl_8041FB80,32,(int)beLayerInfo_vtableRead,(int)beLayerInfo_fieldInit,0,(int)lbl_804D1904);
}
void *beLayerInfo_getMetaCall(){return beLayerInfo_getMeta();}
}
#pragma pop
