#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beSvPlatBaseData_register();
void beSvPlatDataXbox_fieldInit();
void *beSvPlatDataXbox_getMeta();
void beSvPlatDataXbox_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802BC428();
extern char lbl_8041DC84[];
extern char lbl_804CF904[];
extern char lbl_80534840[];
void beSvPlatDataXbox_register();
void *beSvPlatDataXbox_getMetaCall();
}
extern "C" {
void fn_802BC568(){
 fn_80066188((int)beSvPlatDataXbox_register);
}
void beSvPlatDataXbox_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534840,(int)beSvPlatBaseData_register,(int)fn_802BC428,(int)beSvPlatDataXbox_getMetaCall,(int)lbl_8041DC84,44,(int)beSvPlatDataXbox_vtableRead,(int)beSvPlatDataXbox_fieldInit,0,(int)lbl_804CF904);
}
void *beSvPlatDataXbox_getMetaCall(){return beSvPlatDataXbox_getMeta();}
}
#pragma pop
