#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void be_fieldInit();
void *be_getMeta();
void be_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_80284550();
void fn_802B1AC8();
void igInfoManager_register();
extern char be_className[];
extern char lbl_804D31F0[];
extern char be_meta[];
void be_register();
void *be_getMetaCall();
}
extern "C" {
void be_registerNow(){
 meta_registerNow((int)be_register);
}
void be_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)be_meta,(int)igInfoManager_register,(int)fn_80284550,(int)be_getMetaCall,(int)be_className,20,(int)be_vtableRead,(int)be_fieldInit,0,(int)lbl_804D31F0);
}
void *be_getMetaCall(){return be_getMeta();}
}
#pragma pop
