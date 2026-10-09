#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beMatCtrlDataList_getMeta();
void beMatCtrlDataList_vtableRead();
void *fn_80024180();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802D0FC0();
void igObjectList_register();
extern char lbl_8041F9AC[];
extern char lbl_804D172C[];
extern char lbl_805350C0[];
extern void *lbl_805350C4;
void beMatCtrlDataList_register();
void *beMatCtrlDataList_getMetaCall();
}
extern "C" {
void fn_802D0DD4(){
 fn_80066188((int)beMatCtrlDataList_register);
}
void beMatCtrlDataList_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805350C0,(int)igObjectList_register,(int)fn_80024180,(int)beMatCtrlDataList_getMetaCall,(int)lbl_8041F9AC,20,(int)beMatCtrlDataList_vtableRead,0,0,(int)lbl_804D172C);
}
void *beMatCtrlDataList_getMetaCall(){return beMatCtrlDataList_getMeta();}
void *beMatCtrlData_getMeta(){
 if(!lbl_805350C4 || !(reinterpret_cast<unsigned int *>(lbl_805350C4)[0x24/4]&4)) fn_802D0FC0();
 return lbl_805350C4;
}
}
#pragma pop
