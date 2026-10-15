#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beDemoManager_fieldInit();
void *beDemoManager_getMeta();
void beDemoManager_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_80284550();
void fn_802B1AC8();
void igInfoManager_register();
extern char beDemoManager_className[];
extern char beDemoManager_dependencies[];
extern char beDemoManager_meta[];
void beDemoManager_register();
void *beDemoManager_getMetaCall();
}
extern "C" {
void beDemoManager_arkRegister(){
 meta_registerNow((int)beDemoManager_register);
}
void beDemoManager_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beDemoManager_meta,(int)igInfoManager_register,(int)fn_80284550,(int)beDemoManager_getMetaCall,(int)beDemoManager_className,36,(int)beDemoManager_vtableRead,(int)beDemoManager_fieldInit,0,(int)beDemoManager_dependencies);
}
void *beDemoManager_getMetaCall(){return beDemoManager_getMeta();}
}
#pragma pop
