#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beAsTargetModelDataList_getMeta();
void beAsTargetModelDataList_vtableRead();
void *fn_80024180();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802E49F0();
void igObjectList_register();
extern char lbl_80420E3C[];
extern char lbl_804D2E7C[];
extern char lbl_80535730[];
extern void *lbl_80535734;
void beAsTargetModelDataList_register();
void *beAsTargetModelDataList_getMetaCall();
}
extern "C" {
void fn_802E4804(){
 fn_80066188((int)beAsTargetModelDataList_register);
}
void beAsTargetModelDataList_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535730,(int)igObjectList_register,(int)fn_80024180,(int)beAsTargetModelDataList_getMetaCall,(int)lbl_80420E3C,20,(int)beAsTargetModelDataList_vtableRead,0,0,(int)lbl_804D2E7C);
}
void *beAsTargetModelDataList_getMetaCall(){return beAsTargetModelDataList_getMeta();}
void *beAsTargetModelData_getMeta(){
 if(!lbl_80535734 || !(reinterpret_cast<unsigned int *>(lbl_80535734)[0x24/4]&4)) fn_802E49F0();
 return lbl_80535734;
}
}
#pragma pop
