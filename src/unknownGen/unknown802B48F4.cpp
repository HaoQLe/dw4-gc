#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beWaterMoveDataList_getMeta();
void beWaterMoveDataList_vtableRead();
void *fn_80024180();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802B4A88();
void igObjectList_register();
extern char lbl_8041CCB0[];
extern char lbl_804CF07C[];
extern char lbl_80534604[];
extern void *lbl_80534608;
void beWaterMoveDataList_register();
void *beWaterMoveDataList_getMetaCall();
}
extern "C" {
void fn_802B48F4(){
 fn_80066188((int)beWaterMoveDataList_register);
}
void beWaterMoveDataList_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534604,(int)igObjectList_register,(int)fn_80024180,(int)beWaterMoveDataList_getMetaCall,(int)lbl_8041CCB0,20,(int)beWaterMoveDataList_vtableRead,0,0,(int)lbl_804CF07C);
}
void *beWaterMoveDataList_getMetaCall(){return beWaterMoveDataList_getMeta();}
void *beWaterMoveData_getMeta(){
 if(!lbl_80534608 || !(reinterpret_cast<unsigned int *>(lbl_80534608)[0x24/4]&4)) fn_802B4A88();
 return lbl_80534608;
}
}
#pragma pop
