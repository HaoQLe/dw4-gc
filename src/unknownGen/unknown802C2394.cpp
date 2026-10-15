#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void bePadManager_fieldInit();
void *bePadManager_getMeta();
void bePadManager_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_80284550();
void fn_802B1AC8();
void igInfoManager_register();
extern char bePadManager_className[];
extern char lbl_804D0148[];
extern char bePadManager_meta[];
void bePadManager_register();
void *bePadManager_getMetaCall();
}
extern "C" {
void bePadManager_registerNow(){
 meta_registerNow((int)bePadManager_register);
}
void bePadManager_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)bePadManager_meta,(int)igInfoManager_register,(int)fn_80284550,(int)bePadManager_getMetaCall,(int)bePadManager_className,32,(int)bePadManager_vtableRead,(int)bePadManager_fieldInit,0,(int)lbl_804D0148);
}
void *bePadManager_getMetaCall(){return bePadManager_getMeta();}
}
#pragma pop
