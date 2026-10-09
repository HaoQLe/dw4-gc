#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beMatCtrlSearchList_getMeta();
void beMatCtrlSearchList_vtableRead();
void *fn_80024180();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802D0B30();
void igObjectList_register();
extern char lbl_8041F95C[];
extern char lbl_804D16CC[];
extern char lbl_805350A4[];
extern void *lbl_805350A8;
extern void *lbl_805621F4;
void beMatCtrlSearchList_register();
void *beMatCtrlSearchList_getMetaCall();
}
extern "C" {
void fn_802D0948(){
 fn_80066188((int)beMatCtrlSearchList_register);
}
void beMatCtrlSearchList_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805350A4,(int)igObjectList_register,(int)fn_80024180,(int)beMatCtrlSearchList_getMetaCall,(int)lbl_8041F95C,20,(int)beMatCtrlSearchList_vtableRead,0,0,(int)lbl_804D16CC);
}
void *beMatCtrlSearchList_getMetaCall(){return beMatCtrlSearchList_getMeta();}
void *fn_802D0A04(){
 if(!lbl_805350A8) lbl_805350A8=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805350A8;
}
void *beMatCtrlSearch_getMeta(){
 if(!lbl_805350A8 || !(reinterpret_cast<unsigned int *>(lbl_805350A8)[0x24/4]&4)) fn_802D0B30();
 return lbl_805350A8;
}
}
#pragma pop
