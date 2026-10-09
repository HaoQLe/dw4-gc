#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNumVerDataList_getMeta();
void beNumVerDataList_vtableRead();
void *fn_80024180();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802C3570();
void igObjectList_register();
extern char lbl_8041E76C[];
extern char lbl_804D03F0[];
extern char lbl_80534B64[];
extern void *lbl_80534B68;
void beNumVerDataList_register();
void *beNumVerDataList_getMetaCall();
}
extern "C" {
void fn_802C33DC(){
 fn_80066188((int)beNumVerDataList_register);
}
void beNumVerDataList_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534B64,(int)igObjectList_register,(int)fn_80024180,(int)beNumVerDataList_getMetaCall,(int)lbl_8041E76C,20,(int)beNumVerDataList_vtableRead,0,0,(int)lbl_804D03F0);
}
void *beNumVerDataList_getMetaCall(){return beNumVerDataList_getMeta();}
void *beNumVerData_getMeta(){
 if(!lbl_80534B68 || !(reinterpret_cast<unsigned int *>(lbl_80534B68)[0x24/4]&4)) fn_802C3570();
 return lbl_80534B68;
}
}
#pragma pop
