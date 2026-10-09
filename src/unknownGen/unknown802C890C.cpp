#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beModelCtrlInfoList_getMeta();
void beModelCtrlInfoList_vtableRead();
void *fn_80024180();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802C8BAC();
void igObjectList_register();
extern char lbl_8041EF8C[];
extern char lbl_804D0CE8[];
extern char lbl_80534DEC[];
extern void *lbl_80534DF0;
void beModelCtrlInfoList_register();
void *beModelCtrlInfoList_getMetaCall();
}
extern "C" {
void fn_802C890C(){
 fn_80066188((int)beModelCtrlInfoList_register);
}
void beModelCtrlInfoList_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534DEC,(int)igObjectList_register,(int)fn_80024180,(int)beModelCtrlInfoList_getMetaCall,(int)lbl_8041EF8C,20,(int)beModelCtrlInfoList_vtableRead,0,0,(int)lbl_804D0CE8);
}
void *beModelCtrlInfoList_getMetaCall(){return beModelCtrlInfoList_getMeta();}
void *beModelCtrlInfo_getMeta(){
 if(!lbl_80534DF0 || !(reinterpret_cast<unsigned int *>(lbl_80534DF0)[0x24/4]&4)) fn_802C8BAC();
 return lbl_80534DF0;
}
}
#pragma pop
