#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beCriAudio_fieldInit();
void *beCriAudio_getMeta();
void beCriAudio_vtableRead();
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igObject_register();
extern char lbl_8042093C[];
extern char lbl_804D27D4[];
extern char lbl_8053555C[];
void beCriAudio_register();
void *beCriAudio_getMetaCall();
}
extern "C" {
void fn_802DF754(){
 fn_80066188((int)beCriAudio_register);
}
void beCriAudio_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_8053555C,(int)igObject_register,(int)fn_800237D0,(int)beCriAudio_getMetaCall,(int)lbl_8042093C,24,(int)beCriAudio_vtableRead,(int)beCriAudio_fieldInit,0,(int)lbl_804D27D4);
}
void *beCriAudio_getMetaCall(){return beCriAudio_getMeta();}
}
#pragma pop
