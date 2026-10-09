#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802D2C1C();
void *igLightSetList_getMeta();
void igLightSetList_vtableRead();
void igObjectList_register();
extern char lbl_8041FB28[];
extern char lbl_804D18DC[];
extern char lbl_80535138[];
extern void *lbl_8053513C;
void igLightSetList_register();
void *igLightSetList_getMetaCall();
}
extern "C" {
void fn_802D297C(){
 fn_80066188((int)igLightSetList_register);
}
void igLightSetList_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535138,(int)igObjectList_register,(int)fn_80024180,(int)igLightSetList_getMetaCall,(int)lbl_8041FB28,20,(int)igLightSetList_vtableRead,0,0,(int)lbl_804D18DC);
}
void *igLightSetList_getMetaCall(){return igLightSetList_getMeta();}
void *beLightCtrlInfo_getMeta(){
 if(!lbl_8053513C || !(reinterpret_cast<unsigned int *>(lbl_8053513C)[0x24/4]&4)) fn_802D2C1C();
 return lbl_8053513C;
}
}
#pragma pop
