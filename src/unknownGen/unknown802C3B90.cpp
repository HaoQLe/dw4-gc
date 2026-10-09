#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNumberCtrlInfoList_getMeta();
void beNumberCtrlInfoList_vtableRead();
void *fn_80024180();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802C3DE8();
void igObjectList_register();
extern char lbl_8041E7E4[];
extern char lbl_804D0448[];
extern char lbl_80534B84[];
extern void *lbl_80534B88;
void beNumberCtrlInfoList_register();
void *beNumberCtrlInfoList_getMetaCall();
}
extern "C" {
void fn_802C3B90(){
 fn_80066188((int)beNumberCtrlInfoList_register);
}
void beNumberCtrlInfoList_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534B84,(int)igObjectList_register,(int)fn_80024180,(int)beNumberCtrlInfoList_getMetaCall,(int)lbl_8041E7E4,20,(int)beNumberCtrlInfoList_vtableRead,0,0,(int)lbl_804D0448);
}
void *beNumberCtrlInfoList_getMetaCall(){return beNumberCtrlInfoList_getMeta();}
void *beNumberCtrlInfo_getMeta(){
 if(!lbl_80534B88 || !(reinterpret_cast<unsigned int *>(lbl_80534B88)[0x24/4]&4)) fn_802C3DE8();
 return lbl_80534B88;
}
}
#pragma pop
