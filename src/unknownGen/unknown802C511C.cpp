#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoManager_register();
void beMovie_fieldInit();
void *beMovie_getMeta();
void beMovie_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B381C();
extern char beMovie_className[];
extern char lbl_804D0588[];
extern char beMovie_meta[];
void beMovie_register();
void *beMovie_getMetaCall();
}
extern "C" {
void beMovie_registerNow(){
 meta_registerNow((int)beMovie_register);
}
void beMovie_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beMovie_meta,(int)beBaseInfoManager_register,(int)fn_802B381C,(int)beMovie_getMetaCall,(int)beMovie_className,40,(int)beMovie_vtableRead,(int)beMovie_fieldInit,0,(int)lbl_804D0588);
}
void *beMovie_getMetaCall(){return beMovie_getMeta();}
}
#pragma pop
