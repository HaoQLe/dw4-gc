#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoData_register();
void beBaseInfoRamTimer_fieldInit();
void *beBaseInfoRamTimer_getMeta();
void beBaseInfoRamTimer_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B8770();
extern char lbl_80420D3C[];
extern char lbl_805356D4[];
void beBaseInfoRamTimer_register();
void *beBaseInfoRamTimer_getMetaCall();
}
extern "C" {
void fn_802E3558(){
 fn_80066188((int)beBaseInfoRamTimer_register);
}
void beBaseInfoRamTimer_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805356D4,(int)beBaseInfoData_register,(int)fn_802B8770,(int)beBaseInfoRamTimer_getMetaCall,(int)lbl_80420D3C,64,(int)beBaseInfoRamTimer_vtableRead,(int)beBaseInfoRamTimer_fieldInit,0,0);
}
void *beBaseInfoRamTimer_getMetaCall(){return beBaseInfoRamTimer_getMeta();}
}
#pragma pop
