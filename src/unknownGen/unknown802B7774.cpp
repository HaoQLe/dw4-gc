#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beSystem_fieldInit();
void *beSystem_getMeta();
void beSystem_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_80284550();
void fn_802B1AC8();
void igInfoManager_register();
extern char lbl_8041D444[];
extern char lbl_804CF274[];
extern char lbl_805346A8[];
void beSystem_register();
void *beSystem_getMetaCall();
}
extern "C" {
void fn_802B7774(){
 fn_80066188((int)beSystem_register);
}
void beSystem_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805346A8,(int)igInfoManager_register,(int)fn_80284550,(int)beSystem_getMetaCall,(int)lbl_8041D444,104,(int)beSystem_vtableRead,(int)beSystem_fieldInit,0,(int)lbl_804CF274);
}
void *beSystem_getMetaCall(){return beSystem_getMeta();}
}
#pragma pop
