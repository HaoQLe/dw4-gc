#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beDemoManager_fieldInit();
void *beDemoManager_getMeta();
void beDemoManager_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_80284550();
void fn_802B1AC8();
void igInfoManager_register();
extern char lbl_804204E8[];
extern char lbl_804D22E0[];
extern char lbl_805353E4[];
void beDemoManager_register();
void *beDemoManager_getMetaCall();
}
extern "C" {
void fn_802DB298(){
 fn_80066188((int)beDemoManager_register);
}
void beDemoManager_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805353E4,(int)igInfoManager_register,(int)fn_80284550,(int)beDemoManager_getMetaCall,(int)lbl_804204E8,36,(int)beDemoManager_vtableRead,(int)beDemoManager_fieldInit,0,(int)lbl_804D22E0);
}
void *beDemoManager_getMetaCall(){return beDemoManager_getMeta();}
}
#pragma pop
