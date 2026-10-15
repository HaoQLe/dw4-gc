#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoManager_register();
void beGenerater_fieldInit();
void *beGenerater_getMeta();
void beGenerater_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B381C();
extern char beGenerater_className[];
extern char lbl_804D1F70[];
extern char beGenerater_meta[];
void beGenerater_register();
void *beGenerater_getMetaCall();
}
extern "C" {
void beGenerater_registerNow(){
 meta_registerNow((int)beGenerater_register);
}
void beGenerater_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beGenerater_meta,(int)beBaseInfoManager_register,(int)fn_802B381C,(int)beGenerater_getMetaCall,(int)beGenerater_className,40,(int)beGenerater_vtableRead,(int)beGenerater_fieldInit,0,(int)lbl_804D1F70);
}
void *beGenerater_getMetaCall(){return beGenerater_getMeta();}
}
#pragma pop
