#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfo_register();
void beSoundInfo_fieldInit();
void *beSoundInfo_getMeta();
void beSoundInfo_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2E3C();
extern char lbl_8041D658[];
extern char lbl_804CF498[];
extern char lbl_80534740[];
void beSoundInfo_register();
void *beSoundInfo_getMetaCall();
}
extern "C" {
void fn_802B8A24(){
 fn_80066188((int)beSoundInfo_register);
}
void beSoundInfo_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534740,(int)beBaseInfo_register,(int)fn_802B2E3C,(int)beSoundInfo_getMetaCall,(int)lbl_8041D658,40,(int)beSoundInfo_vtableRead,(int)beSoundInfo_fieldInit,0,(int)lbl_804CF498);
}
void *beSoundInfo_getMetaCall(){return beSoundInfo_getMeta();}
}
#pragma pop
