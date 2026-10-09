#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beSvSlotData_register();
void *beSvSlotPS2_getMeta();
void beSvSlotPS2_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802BFAE8();
extern char lbl_8041E22C[];
extern char lbl_805349BC[];
void beSvSlotPS2_register();
void *beSvSlotPS2_getMetaCall();
}
extern "C" {
void fn_802BFA34(){
 fn_80066188((int)beSvSlotPS2_register);
}
void beSvSlotPS2_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805349BC,(int)beSvSlotData_register,(int)fn_802BFAE8,(int)beSvSlotPS2_getMetaCall,(int)lbl_8041E22C,24,(int)beSvSlotPS2_vtableRead,0,0,0);
}
void *beSvSlotPS2_getMetaCall(){return beSvSlotPS2_getMeta();}
}
#pragma pop
