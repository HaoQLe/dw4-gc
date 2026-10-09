#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beAction2Info_fieldInit();
void *beAction2Info_getMeta();
void beAction2Info_vtableRead();
void beBaseInfo_register();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2E3C();
extern char lbl_80420FFC[];
extern char lbl_804D30C8[];
extern char lbl_805357D4[];
void beAction2Info_register();
void *beAction2Info_getMetaCall();
}
extern "C" {
void fn_802E6090(){
 fn_80066188((int)beAction2Info_register);
}
void beAction2Info_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805357D4,(int)beBaseInfo_register,(int)fn_802B2E3C,(int)beAction2Info_getMetaCall,(int)lbl_80420FFC,40,(int)beAction2Info_vtableRead,(int)beAction2Info_fieldInit,0,(int)lbl_804D30C8);
}
void *beAction2Info_getMetaCall(){return beAction2Info_getMeta();}
}
#pragma pop
