#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoData_register();
void beSoundData_fieldInit();
void *beSoundData_getMeta();
void beSoundData_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B8770();
extern char lbl_8041D694[];
extern char lbl_80534754[];
void beSoundData_register();
void *beSoundData_getMetaCall();
}
extern "C" {
void fn_802B8C84(){
 fn_80066188((int)beSoundData_register);
}
void beSoundData_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534754,(int)beBaseInfoData_register,(int)fn_802B8770,(int)beSoundData_getMetaCall,(int)lbl_8041D694,32,(int)beSoundData_vtableRead,(int)beSoundData_fieldInit,0,0);
}
void *beSoundData_getMetaCall(){return beSoundData_getMeta();}
}
#pragma pop
