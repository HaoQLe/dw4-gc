#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfo_register();
void beDBManagerInfo_fieldInit();
void *beDBManagerInfo_getMeta();
void beDBManagerInfo_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2E3C();
extern char lbl_80420748[];
extern char lbl_804D25A8[];
extern char lbl_805354B8[];
void beDBManagerInfo_register();
void *beDBManagerInfo_getMetaCall();
}
extern "C" {
void fn_802DE224(){
 fn_80066188((int)beDBManagerInfo_register);
}
void beDBManagerInfo_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805354B8,(int)beBaseInfo_register,(int)fn_802B2E3C,(int)beDBManagerInfo_getMetaCall,(int)lbl_80420748,32,(int)beDBManagerInfo_vtableRead,(int)beDBManagerInfo_fieldInit,0,(int)lbl_804D25A8);
}
void *beDBManagerInfo_getMetaCall(){return beDBManagerInfo_getMeta();}
}
#pragma pop
