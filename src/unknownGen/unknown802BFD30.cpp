#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beSvSlotData_register();
void beSvSlotXbox_fieldInit();
void *beSvSlotXbox_getMeta();
void beSvSlotXbox_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802BFAE8();
extern char lbl_8041E244[];
extern char lbl_805349C4[];
void beSvSlotXbox_register();
void *beSvSlotXbox_getMetaCall();
}
extern "C" {
void fn_802BFD30(){
 fn_80066188((int)beSvSlotXbox_register);
}
void beSvSlotXbox_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805349C4,(int)beSvSlotData_register,(int)fn_802BFAE8,(int)beSvSlotXbox_getMetaCall,(int)lbl_8041E244,56,(int)beSvSlotXbox_vtableRead,(int)beSvSlotXbox_fieldInit,0,0);
}
void *beSvSlotXbox_getMetaCall(){return beSvSlotXbox_getMeta();}
}
#pragma pop
