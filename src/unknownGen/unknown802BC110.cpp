#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoManager_register();
void beSaveUtil_fieldInit();
void *beSaveUtil_getMeta();
void beSaveUtil_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B381C();
extern char lbl_8041DC50[];
extern char lbl_804CF8D8[];
extern char lbl_80534830[];
void beSaveUtil_register();
void *beSaveUtil_getMetaCall();
}
extern "C" {
void fn_802BC110(){
 fn_80066188((int)beSaveUtil_register);
}
void beSaveUtil_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534830,(int)beBaseInfoManager_register,(int)fn_802B381C,(int)beSaveUtil_getMetaCall,(int)lbl_8041DC50,40,(int)beSaveUtil_vtableRead,(int)beSaveUtil_fieldInit,0,(int)lbl_804CF8D8);
}
void *beSaveUtil_getMetaCall(){return beSaveUtil_getMeta();}
}
#pragma pop
