#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfo_register();
void beShadow01Info_fieldInit();
void *beShadow01Info_getMeta();
void beShadow01Info_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2E3C();
extern char lbl_8041D884[];
extern char lbl_804CF664[];
extern char lbl_80534798[];
void beShadow01Info_register();
void *beShadow01Info_getMetaCall();
}
extern "C" {
void fn_802B9A78(){
 fn_80066188((int)beShadow01Info_register);
}
void beShadow01Info_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534798,(int)beBaseInfo_register,(int)fn_802B2E3C,(int)beShadow01Info_getMetaCall,(int)lbl_8041D884,40,(int)beShadow01Info_vtableRead,(int)beShadow01Info_fieldInit,0,(int)lbl_804CF664);
}
void *beShadow01Info_getMetaCall(){return beShadow01Info_getMeta();}
}
#pragma pop
