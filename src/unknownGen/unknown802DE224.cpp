#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfo_register();
void beDBManagerInfo_fieldInit();
void *beDBManagerInfo_getMeta();
void beDBManagerInfo_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2E3C();
extern char beDBManagerInfo_className[];
extern char lbl_804D25A8[];
extern char beDBManagerInfo_meta[];
void beDBManagerInfo_register();
void *beDBManagerInfo_getMetaCall();
}
extern "C" {
void beDBManagerInfo_registerNow(){
 meta_registerNow((int)beDBManagerInfo_register);
}
void beDBManagerInfo_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beDBManagerInfo_meta,(int)beBaseInfo_register,(int)fn_802B2E3C,(int)beDBManagerInfo_getMetaCall,(int)beDBManagerInfo_className,32,(int)beDBManagerInfo_vtableRead,(int)beDBManagerInfo_fieldInit,0,(int)lbl_804D25A8);
}
void *beDBManagerInfo_getMetaCall(){return beDBManagerInfo_getMeta();}
}
#pragma pop
