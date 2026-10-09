#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beModelCtrlMoveObjectList_getMeta();
void beModelCtrlMoveObjectList_vtableRead();
void *fn_80024180();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802C86B0();
void igObjectList_register();
extern char lbl_8041EF08[];
extern char lbl_804D0C50[];
extern char lbl_80534DC0[];
extern void *lbl_80534DC4;
void beModelCtrlMoveObjectList_register();
void *beModelCtrlMoveObjectList_getMetaCall();
}
extern "C" {
void fn_802C8520(){
 fn_80066188((int)beModelCtrlMoveObjectList_register);
}
void beModelCtrlMoveObjectList_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534DC0,(int)igObjectList_register,(int)fn_80024180,(int)beModelCtrlMoveObjectList_getMetaCall,(int)lbl_8041EF08,20,(int)beModelCtrlMoveObjectList_vtableRead,0,0,(int)lbl_804D0C50);
}
void *beModelCtrlMoveObjectList_getMetaCall(){return beModelCtrlMoveObjectList_getMeta();}
void *fn_802C85DC(void *object){
 fn_802C86B0();
 return fn_8006546C(lbl_80534DC4,object);
}
void *beModelCtrlMoveObject_getMeta(){
 if(!lbl_80534DC4 || !(reinterpret_cast<unsigned int *>(lbl_80534DC4)[0x24/4]&4)) fn_802C86B0();
 return lbl_80534DC4;
}
}
#pragma pop
