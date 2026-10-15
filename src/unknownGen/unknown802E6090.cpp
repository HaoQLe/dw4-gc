#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beAction2Info_fieldInit();
void *beAction2Info_getMeta();
void beAction2Info_vtableRead();
void beBaseInfo_register();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2E3C();
extern char beAction2Info_className[];
extern char lbl_804D30C8[];
extern char beAction2Info_meta[];
void beAction2Info_register();
void *beAction2Info_getMetaCall();
}
extern "C" {
void beAction2Info_registerNow(){
 meta_registerNow((int)beAction2Info_register);
}
void beAction2Info_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beAction2Info_meta,(int)beBaseInfo_register,(int)fn_802B2E3C,(int)beAction2Info_getMetaCall,(int)beAction2Info_className,40,(int)beAction2Info_vtableRead,(int)beAction2Info_fieldInit,0,(int)lbl_804D30C8);
}
void *beAction2Info_getMetaCall(){return beAction2Info_getMeta();}
}
#pragma pop
