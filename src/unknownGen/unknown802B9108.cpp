#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoManager_register();
void beSound_fieldInit();
void *beSound_getMeta();
void beSound_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B381C();
extern char beSound_className[];
extern char lbl_804CF5F8[];
extern char beSound_meta[];
void beSound_register();
void *beSound_getMetaCall();
}
extern "C" {
void beSound_registerNow(){
 meta_registerNow((int)beSound_register);
}
void beSound_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beSound_meta,(int)beBaseInfoManager_register,(int)fn_802B381C,(int)beSound_getMetaCall,(int)beSound_className,44,(int)beSound_vtableRead,(int)beSound_fieldInit,0,(int)lbl_804CF5F8);
}
void *beSound_getMetaCall(){return beSound_getMeta();}
}
#pragma pop
