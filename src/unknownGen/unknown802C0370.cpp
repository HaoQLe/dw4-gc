#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beSaveDataDeliver_fieldInit();
void *beSaveDataDeliver_getMeta();
void beSaveDataDeliver_vtableRead();
void *fn_800237D0();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igObject_register();
extern char beSaveDataDeliver_className[];
extern char beSaveDataDeliver_meta[];
void beSaveDataDeliver_register();
void *beSaveDataDeliver_getMetaCall();
}
extern "C" {
void beSaveDataDeliver_registerNow(){
 meta_registerNow((int)beSaveDataDeliver_register);
}
void beSaveDataDeliver_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beSaveDataDeliver_meta,(int)igObject_register,(int)fn_800237D0,(int)beSaveDataDeliver_getMetaCall,(int)beSaveDataDeliver_className,16,(int)beSaveDataDeliver_vtableRead,(int)beSaveDataDeliver_fieldInit,0,0);
}
void *beSaveDataDeliver_getMetaCall(){return beSaveDataDeliver_getMeta();}
}
#pragma pop
