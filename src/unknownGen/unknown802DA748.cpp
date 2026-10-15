#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beFileListInfoManager_fieldInit();
void *beFileListInfoManager_getMeta();
void beFileListInfoManager_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_80284550();
void fn_802B1AC8();
void igInfoManager_register();
extern char beFileListInfoManager_className[];
extern char beFileListInfoManager_dependencies[];
extern char beFileListInfoManager_meta[];
void beFileListInfoManager_register();
void *beFileListInfoManager_getMetaCall();
}
extern "C" {
void beFileListInfoManager_arkRegister(){
 meta_registerNow((int)beFileListInfoManager_register);
}
void beFileListInfoManager_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beFileListInfoManager_meta,(int)igInfoManager_register,(int)fn_80284550,(int)beFileListInfoManager_getMetaCall,(int)beFileListInfoManager_className,64,(int)beFileListInfoManager_vtableRead,(int)beFileListInfoManager_fieldInit,0,(int)beFileListInfoManager_dependencies);
}
void *beFileListInfoManager_getMetaCall(){return beFileListInfoManager_getMeta();}
}
#pragma pop
