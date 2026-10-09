#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoManager_register();
void beMovie_fieldInit();
void *beMovie_getMeta();
void beMovie_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B381C();
extern char lbl_8041E938[];
extern char lbl_804D0588[];
extern char lbl_80534BE4[];
void beMovie_register();
void *beMovie_getMetaCall();
}
extern "C" {
void fn_802C511C(){
 fn_80066188((int)beMovie_register);
}
void beMovie_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534BE4,(int)beBaseInfoManager_register,(int)fn_802B381C,(int)beMovie_getMetaCall,(int)lbl_8041E938,40,(int)beMovie_vtableRead,(int)beMovie_fieldInit,0,(int)lbl_804D0588);
}
void *beMovie_getMetaCall(){return beMovie_getMeta();}
}
#pragma pop
