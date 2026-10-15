#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoManager_register();
void beSeCtl_fieldInit();
void *beSeCtl_getMeta();
void beSeCtl_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B381C();
extern char beSeCtl_className[];
extern char beSeCtl_dependencies[];
extern char beSeCtl_meta[];
void beSeCtl_register();
void *beSeCtl_getMetaCall();
}
extern "C" {
void beSeCtl_arkRegister(){
 meta_registerNow((int)beSeCtl_register);
}
void beSeCtl_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beSeCtl_meta,(int)beBaseInfoManager_register,(int)fn_802B381C,(int)beSeCtl_getMetaCall,(int)beSeCtl_className,36,(int)beSeCtl_vtableRead,(int)beSeCtl_fieldInit,0,(int)beSeCtl_dependencies);
}
void *beSeCtl_getMetaCall(){return beSeCtl_getMeta();}
}
#pragma pop
