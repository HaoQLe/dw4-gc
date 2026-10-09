#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beTimer_fieldInit();
void *beTimer_getMeta();
void beTimer_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_80284550();
void fn_802B1AC8();
void igInfoManager_register();
extern char lbl_8041D2C8[];
extern char lbl_804CF0DC[];
extern char lbl_80534630[];
void beTimer_register();
void *beTimer_getMetaCall();
}
extern "C" {
void fn_802B58D8(){
 fn_80066188((int)beTimer_register);
}
void beTimer_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534630,(int)igInfoManager_register,(int)fn_80284550,(int)beTimer_getMetaCall,(int)lbl_8041D2C8,40,(int)beTimer_vtableRead,(int)beTimer_fieldInit,0,(int)lbl_804CF0DC);
}
void *beTimer_getMetaCall(){return beTimer_getMeta();}
}
#pragma pop
