#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoManager_register();
void beFont_fieldInit();
void *beFont_getMeta();
void beFont_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B381C();
extern char lbl_80420348[];
extern char lbl_804D20C8[];
extern char lbl_80535358[];
void beFont_register();
void *beFont_getMetaCall();
}
extern "C" {
void fn_802D9DF4(){
 fn_80066188((int)beFont_register);
}
void beFont_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535358,(int)beBaseInfoManager_register,(int)fn_802B381C,(int)beFont_getMetaCall,(int)lbl_80420348,72,(int)beFont_vtableRead,(int)beFont_fieldInit,0,(int)lbl_804D20C8);
}
void *beFont_getMetaCall(){return beFont_getMeta();}
}
#pragma pop
