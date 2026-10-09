#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beGeneraterItemDataOneList_getMeta();
void beGeneraterItemDataOneList_vtableRead();
void *fn_80024180();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802D84E4();
void igObjectList_register();
extern char lbl_804201A8[];
extern char lbl_804D1EF8[];
extern char lbl_805352EC[];
extern void *lbl_805352F0;
void beGeneraterItemDataOneList_register();
void *beGeneraterItemDataOneList_getMetaCall();
}
extern "C" {
void fn_802D8340(){
 fn_80066188((int)beGeneraterItemDataOneList_register);
}
void beGeneraterItemDataOneList_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805352EC,(int)igObjectList_register,(int)fn_80024180,(int)beGeneraterItemDataOneList_getMetaCall,(int)lbl_804201A8,20,(int)beGeneraterItemDataOneList_vtableRead,0,0,(int)lbl_804D1EF8);
}
void *beGeneraterItemDataOneList_getMetaCall(){return beGeneraterItemDataOneList_getMeta();}
void *beGeneraterItemDataOne_getMeta(){
 if(!lbl_805352F0 || !(reinterpret_cast<unsigned int *>(lbl_805352F0)[0x24/4]&4)) fn_802D84E4();
 return lbl_805352F0;
}
}
#pragma pop
