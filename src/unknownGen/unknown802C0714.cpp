#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beSvDeliver_fieldInit();
void *beSvDeliver_getMeta();
void beSvDeliver_vtableRead();
void *fn_800237D0();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igObject_register();
extern char beSvDeliver_className[];
extern char lbl_804CFE94[];
extern char beSvDeliver_meta[];
void beSvDeliver_register();
void *beSvDeliver_getMetaCall();
}
extern "C" {
void beSvDeliver_registerNow(){
 meta_registerNow((int)beSvDeliver_register);
}
void beSvDeliver_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beSvDeliver_meta,(int)igObject_register,(int)fn_800237D0,(int)beSvDeliver_getMetaCall,(int)beSvDeliver_className,68,(int)beSvDeliver_vtableRead,(int)beSvDeliver_fieldInit,0,(int)lbl_804CFE94);
}
void *beSvDeliver_getMetaCall(){return beSvDeliver_getMeta();}
}
#pragma pop
