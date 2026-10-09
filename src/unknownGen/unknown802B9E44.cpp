#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoManager_register();
void beShadow01_fieldInit();
void *beShadow01_getMeta();
void beShadow01_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B381C();
extern char lbl_8041D8C4[];
extern char lbl_804CF6A0[];
extern char lbl_805347A8[];
void beShadow01_register();
void *beShadow01_getMetaCall();
}
extern "C" {
void fn_802B9E44(){
 fn_80066188((int)beShadow01_register);
}
void beShadow01_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805347A8,(int)beBaseInfoManager_register,(int)fn_802B381C,(int)beShadow01_getMetaCall,(int)lbl_8041D8C4,48,(int)beShadow01_vtableRead,(int)beShadow01_fieldInit,0,(int)lbl_804CF6A0);
}
void *beShadow01_getMetaCall(){return beShadow01_getMeta();}
}
#pragma pop
