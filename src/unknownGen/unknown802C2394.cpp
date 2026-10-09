#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void bePadManager_fieldInit();
void *bePadManager_getMeta();
void bePadManager_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_80284550();
void fn_802B1AC8();
void igInfoManager_register();
extern char lbl_8041E590[];
extern char lbl_804D0148[];
extern char lbl_80534AAC[];
void bePadManager_register();
void *bePadManager_getMetaCall();
}
extern "C" {
void fn_802C2394(){
 fn_80066188((int)bePadManager_register);
}
void bePadManager_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534AAC,(int)igInfoManager_register,(int)fn_80284550,(int)bePadManager_getMetaCall,(int)lbl_8041E590,32,(int)bePadManager_vtableRead,(int)bePadManager_fieldInit,0,(int)lbl_804D0148);
}
void *bePadManager_getMetaCall(){return bePadManager_getMeta();}
}
#pragma pop
