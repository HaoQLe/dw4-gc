#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoRam_fieldInit();
void *beBaseInfoRam_getMeta();
void beBaseInfoRam_vtableRead();
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igObject_register();
extern char lbl_80420D10[];
extern char lbl_804D2CC0[];
extern char lbl_805356AC[];
void beBaseInfoRam_register();
void *beBaseInfoRam_getMetaCall();
}
extern "C" {
void fn_802E325C(){
 fn_80066188((int)beBaseInfoRam_register);
}
void beBaseInfoRam_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805356AC,(int)igObject_register,(int)fn_800237D0,(int)beBaseInfoRam_getMetaCall,(int)lbl_80420D10,44,(int)beBaseInfoRam_vtableRead,(int)beBaseInfoRam_fieldInit,0,(int)lbl_804D2CC0);
}
void *beBaseInfoRam_getMetaCall(){return beBaseInfoRam_getMeta();}
}
#pragma pop
