#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beLightCtrlInfo_registerNow();
void *igLightSetList_getMeta();
void igLightSetList_vtableRead();
void igObjectList_register();
extern char igLightSetList_className[];
extern char lbl_804D18DC[];
extern char igLightSetList_meta[];
extern void *beLightCtrlInfo_meta;
void igLightSetList_register();
void *igLightSetList_getMetaCall();
}
extern "C" {
void igLightSetList_registerNow(){
 meta_registerNow((int)igLightSetList_register);
}
void igLightSetList_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)igLightSetList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igLightSetList_getMetaCall,(int)igLightSetList_className,20,(int)igLightSetList_vtableRead,0,0,(int)lbl_804D18DC);
}
void *igLightSetList_getMetaCall(){return igLightSetList_getMeta();}
void *beLightCtrlInfo_getMeta(){
 if(!beLightCtrlInfo_meta || !(reinterpret_cast<unsigned int *>(beLightCtrlInfo_meta)[0x24/4]&4)) beLightCtrlInfo_registerNow();
 return beLightCtrlInfo_meta;
}
}
#pragma pop
