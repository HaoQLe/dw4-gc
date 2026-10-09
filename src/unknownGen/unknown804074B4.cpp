#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802E170C();
void fn_80402E28();
void igFlyMode_fieldInit();
void *igFlyMode_getMeta();
void igFlyMode_vtableRead();
void igViewMode_register();
extern char lbl_80462928[];
extern char lbl_804F0BB4[];
extern char lbl_8055CA20[];
void igFlyMode_register();
void *igFlyMode_getMetaCall();
}
extern "C" {
void fn_804074B4(){
 fn_80066188((int)igFlyMode_register);
}
void igFlyMode_register(){
 fn_80402E28();
 fn_80066204(0,(int)lbl_8055CA20,(int)igViewMode_register,(int)fn_802E170C,(int)igFlyMode_getMetaCall,(int)lbl_80462928,160,(int)igFlyMode_vtableRead,(int)igFlyMode_fieldInit,0,(int)lbl_804F0BB4);
}
void *igFlyMode_getMetaCall(){return igFlyMode_getMeta();}
}
#pragma pop
