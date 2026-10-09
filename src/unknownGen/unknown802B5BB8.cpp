#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beTimerDataList_getMeta();
void beTimerDataList_vtableRead();
void *fn_80024180();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802B5D90();
void igObjectList_register();
extern char lbl_8041D2E0[];
extern char lbl_804CF140[];
extern char lbl_80534648[];
extern void *lbl_8053464C;
void beTimerDataList_register();
void *beTimerDataList_getMetaCall();
}
extern "C" {
void fn_802B5BB8(){
 fn_80066188((int)beTimerDataList_register);
}
void beTimerDataList_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534648,(int)igObjectList_register,(int)fn_80024180,(int)beTimerDataList_getMetaCall,(int)lbl_8041D2E0,20,(int)beTimerDataList_vtableRead,0,0,(int)lbl_804CF140);
}
void *beTimerDataList_getMetaCall(){return beTimerDataList_getMeta();}
void *beTimerData_getMeta(){
 if(!lbl_8053464C || !(reinterpret_cast<unsigned int *>(lbl_8053464C)[0x24/4]&4)) fn_802B5D90();
 return lbl_8053464C;
}
}
#pragma pop
