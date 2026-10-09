#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beFileListInfoManager_fieldInit();
void *beFileListInfoManager_getMeta();
void beFileListInfoManager_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_80284550();
void fn_802B1AC8();
void igInfoManager_register();
extern char lbl_8042041C[];
extern char lbl_804D21C4[];
extern char lbl_80535398[];
void beFileListInfoManager_register();
void *beFileListInfoManager_getMetaCall();
}
extern "C" {
void fn_802DA748(){
 fn_80066188((int)beFileListInfoManager_register);
}
void beFileListInfoManager_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535398,(int)igInfoManager_register,(int)fn_80284550,(int)beFileListInfoManager_getMetaCall,(int)lbl_8042041C,64,(int)beFileListInfoManager_vtableRead,(int)beFileListInfoManager_fieldInit,0,(int)lbl_804D21C4);
}
void *beFileListInfoManager_getMetaCall(){return beFileListInfoManager_getMeta();}
}
#pragma pop
