#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNumVerInsideDataList_getMeta();
void beNumVerInsideDataList_vtableRead();
void *fn_80024180();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802C3994();
void igObjectList_register();
extern char lbl_8041E7A8[];
extern char lbl_804D0420[];
extern char lbl_80534B74[];
extern void *lbl_80534B78;
void beNumVerInsideDataList_register();
void *beNumVerInsideDataList_getMetaCall();
}
extern "C" {
void fn_802C3804(){
 fn_80066188((int)beNumVerInsideDataList_register);
}
void beNumVerInsideDataList_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534B74,(int)igObjectList_register,(int)fn_80024180,(int)beNumVerInsideDataList_getMetaCall,(int)lbl_8041E7A8,20,(int)beNumVerInsideDataList_vtableRead,0,0,(int)lbl_804D0420);
}
void *beNumVerInsideDataList_getMetaCall(){return beNumVerInsideDataList_getMeta();}
void *fn_802C38C0(void *object){
 fn_802C3994();
 return fn_8006546C(lbl_80534B78,object);
}
void *beNumVerInsideData_getMeta(){
 if(!lbl_80534B78 || !(reinterpret_cast<unsigned int *>(lbl_80534B78)[0x24/4]&4)) fn_802C3994();
 return lbl_80534B78;
}
}
#pragma pop
