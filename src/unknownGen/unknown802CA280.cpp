#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beModelCtrlAIMapList_getMeta();
void beModelCtrlAIMapList_vtableRead();
void *fn_80024180();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802CA57C();
void igObjectList_register();
extern char lbl_8041F138[];
extern char lbl_804D0E3C[];
extern char lbl_80534E6C[];
extern void *lbl_80534E70;
void beModelCtrlAIMapList_register();
void *beModelCtrlAIMapList_getMetaCall();
}
extern "C" {
void fn_802CA280(){
 fn_80066188((int)beModelCtrlAIMapList_register);
}
void beModelCtrlAIMapList_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534E6C,(int)igObjectList_register,(int)fn_80024180,(int)beModelCtrlAIMapList_getMetaCall,(int)lbl_8041F138,20,(int)beModelCtrlAIMapList_vtableRead,0,0,(int)lbl_804D0E3C);
}
void *beModelCtrlAIMapList_getMetaCall(){return beModelCtrlAIMapList_getMeta();}
void *beModelCtrlAIMap_getMeta(){
 if(!lbl_80534E70 || !(reinterpret_cast<unsigned int *>(lbl_80534E70)[0x24/4]&4)) fn_802CA57C();
 return lbl_80534E70;
}
}
#pragma pop
