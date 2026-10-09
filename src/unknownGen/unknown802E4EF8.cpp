#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beActionStarterDataList_getMeta();
void beActionStarterDataList_vtableRead();
void *fn_80024180();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802E50E4();
void igObjectList_register();
extern char lbl_80420E80[];
extern char lbl_804D2EAC[];
extern char lbl_80535744[];
extern void *lbl_80535748;
void beActionStarterDataList_register();
void *beActionStarterDataList_getMetaCall();
}
extern "C" {
void fn_802E4EF8(){
 fn_80066188((int)beActionStarterDataList_register);
}
void beActionStarterDataList_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535744,(int)igObjectList_register,(int)fn_80024180,(int)beActionStarterDataList_getMetaCall,(int)lbl_80420E80,20,(int)beActionStarterDataList_vtableRead,0,0,(int)lbl_804D2EAC);
}
void *beActionStarterDataList_getMetaCall(){return beActionStarterDataList_getMeta();}
void *beActionStarterData_getMeta(){
 if(!lbl_80535748 || !(reinterpret_cast<unsigned int *>(lbl_80535748)[0x24/4]&4)) fn_802E50E4();
 return lbl_80535748;
}
}
#pragma pop
