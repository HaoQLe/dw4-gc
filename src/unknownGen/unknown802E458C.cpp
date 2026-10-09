#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beActionStarterInfo_fieldInit();
void *beActionStarterInfo_getMeta();
void beActionStarterInfo_vtableRead();
void beBaseInfo_register();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2E3C();
extern char lbl_80420E1C[];
extern char lbl_804D2E64[];
extern char lbl_80535728[];
void beActionStarterInfo_register();
void *beActionStarterInfo_getMetaCall();
}
extern "C" {
void fn_802E458C(){
 fn_80066188((int)beActionStarterInfo_register);
}
void beActionStarterInfo_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535728,(int)beBaseInfo_register,(int)fn_802B2E3C,(int)beActionStarterInfo_getMetaCall,(int)lbl_80420E1C,32,(int)beActionStarterInfo_vtableRead,(int)beActionStarterInfo_fieldInit,0,(int)lbl_804D2E64);
}
void *beActionStarterInfo_getMetaCall(){return beActionStarterInfo_getMeta();}
}
#pragma pop
