#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beLua_fieldInit();
void *beLua_getMeta();
void beLua_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_80284550();
void fn_802B1AC8();
void igInfoManager_register();
extern char beLua_className[];
extern char beLua_dependencies[];
extern char beLua_meta[];
void beLua_register();
void *beLua_getMetaCall();
}
extern "C" {
void beLua_arkRegister(){
 meta_registerNow((int)beLua_register);
}
void beLua_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beLua_meta,(int)igInfoManager_register,(int)fn_80284550,(int)beLua_getMetaCall,(int)beLua_className,32,(int)beLua_vtableRead,(int)beLua_fieldInit,0,(int)beLua_dependencies);
}
void *beLua_getMetaCall(){return beLua_getMeta();}
}
#pragma pop
