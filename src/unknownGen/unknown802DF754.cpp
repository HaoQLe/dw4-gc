#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beCriAudio_fieldInit();
void *beCriAudio_getMeta();
void beCriAudio_vtableRead();
void *fn_800237D0();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igObject_register();
extern char beCriAudio_className[];
extern char lbl_804D27D4[];
extern char beCriAudio_meta[];
void beCriAudio_register();
void *beCriAudio_getMetaCall();
}
extern "C" {
void beCriAudio_registerNow(){
 meta_registerNow((int)beCriAudio_register);
}
void beCriAudio_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beCriAudio_meta,(int)igObject_register,(int)fn_800237D0,(int)beCriAudio_getMetaCall,(int)beCriAudio_className,24,(int)beCriAudio_vtableRead,(int)beCriAudio_fieldInit,0,(int)lbl_804D27D4);
}
void *beCriAudio_getMetaCall(){return beCriAudio_getMeta();}
}
#pragma pop
