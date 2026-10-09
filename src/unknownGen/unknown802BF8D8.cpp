#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beSvSlotDataList_getMeta();
void beSvSlotDataList_vtableRead();
void *fn_80024180();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802BFA34();
void igObjectList_register();
extern char lbl_8041E218[];
extern char lbl_804CFDCC[];
extern char lbl_805349B8[];
extern void *lbl_805349BC;
void beSvSlotDataList_register();
void *beSvSlotDataList_getMetaCall();
}
extern "C" {
void fn_802BF8D8(){
 fn_80066188((int)beSvSlotDataList_register);
}
void beSvSlotDataList_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805349B8,(int)igObjectList_register,(int)fn_80024180,(int)beSvSlotDataList_getMetaCall,(int)lbl_8041E218,20,(int)beSvSlotDataList_vtableRead,0,0,(int)lbl_804CFDCC);
}
void *beSvSlotDataList_getMetaCall(){return beSvSlotDataList_getMeta();}
void *beSvSlotPS2_getMeta(){
 if(!lbl_805349BC || !(reinterpret_cast<unsigned int *>(lbl_805349BC)[0x24/4]&4)) fn_802BFA34();
 return lbl_805349BC;
}
}
#pragma pop
