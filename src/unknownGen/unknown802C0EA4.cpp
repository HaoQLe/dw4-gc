#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfo_register();
void bePoint01Info_fieldInit();
void *bePoint01Info_getMeta();
void bePoint01Info_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2E3C();
extern char bePoint01Info_className[];
extern char lbl_804CFFE4[];
extern char bePoint01Info_meta[];
void bePoint01Info_register();
void *bePoint01Info_getMetaCall();
}
extern "C" {
void bePoint01Info_registerNow(){
 meta_registerNow((int)bePoint01Info_register);
}
void bePoint01Info_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)bePoint01Info_meta,(int)beBaseInfo_register,(int)fn_802B2E3C,(int)bePoint01Info_getMetaCall,(int)bePoint01Info_className,36,(int)bePoint01Info_vtableRead,(int)bePoint01Info_fieldInit,0,(int)lbl_804CFFE4);
}
void *bePoint01Info_getMetaCall(){return bePoint01Info_getMeta();}
}
#pragma pop
