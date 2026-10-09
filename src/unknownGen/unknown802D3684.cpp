#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beLayerGroupList_getMeta();
void beLayerGroupList_vtableRead();
void *fn_80024180();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802D3828();
void igObjectList_register();
extern char lbl_8041FB94[];
extern char lbl_804D191C[];
extern char lbl_80535158[];
extern void *lbl_8053515C;
void beLayerGroupList_register();
void *beLayerGroupList_getMetaCall();
}
extern "C" {
void fn_802D3684(){
 fn_80066188((int)beLayerGroupList_register);
}
void beLayerGroupList_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535158,(int)igObjectList_register,(int)fn_80024180,(int)beLayerGroupList_getMetaCall,(int)lbl_8041FB94,20,(int)beLayerGroupList_vtableRead,0,0,(int)lbl_804D191C);
}
void *beLayerGroupList_getMetaCall(){return beLayerGroupList_getMeta();}
void *beLayerGroup_getMeta(){
 if(!lbl_8053515C || !(reinterpret_cast<unsigned int *>(lbl_8053515C)[0x24/4]&4)) fn_802D3828();
 return lbl_8053515C;
}
}
#pragma pop
