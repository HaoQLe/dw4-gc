#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfo_register();
void bePoint01Info_fieldInit();
void *bePoint01Info_getMeta();
void bePoint01Info_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2E3C();
extern char lbl_8041E3FC[];
extern char lbl_804CFFE4[];
extern char lbl_80534A5C[];
void bePoint01Info_register();
void *bePoint01Info_getMetaCall();
}
extern "C" {
void fn_802C0EA4(){
 fn_80066188((int)bePoint01Info_register);
}
void bePoint01Info_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534A5C,(int)beBaseInfo_register,(int)fn_802B2E3C,(int)bePoint01Info_getMetaCall,(int)lbl_8041E3FC,36,(int)bePoint01Info_vtableRead,(int)bePoint01Info_fieldInit,0,(int)lbl_804CFFE4);
}
void *bePoint01Info_getMetaCall(){return bePoint01Info_getMeta();}
}
#pragma pop
