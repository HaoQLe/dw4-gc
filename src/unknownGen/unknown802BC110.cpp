#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoManager_register();
void beSaveUtil_fieldInit();
void *beSaveUtil_getMeta();
void beSaveUtil_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B381C();
extern char beSaveUtil_className[];
extern char beSaveUtil_dependencies[];
extern char beSaveUtil_meta[];
void beSaveUtil_register();
void *beSaveUtil_getMetaCall();
}
extern "C" {
void beSaveUtil_arkRegister(){
 meta_registerNow((int)beSaveUtil_register);
}
void beSaveUtil_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beSaveUtil_meta,(int)beBaseInfoManager_register,(int)fn_802B381C,(int)beSaveUtil_getMetaCall,(int)beSaveUtil_className,40,(int)beSaveUtil_vtableRead,(int)beSaveUtil_fieldInit,0,(int)beSaveUtil_dependencies);
}
void *beSaveUtil_getMetaCall(){return beSaveUtil_getMeta();}
}
#pragma pop
