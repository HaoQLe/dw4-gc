#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfo_register();
void beSoundInfo_fieldInit();
void *beSoundInfo_getMeta();
void beSoundInfo_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2E3C();
extern char beSoundInfo_className[];
extern char beSoundInfo_dependencies[];
extern char beSoundInfo_meta[];
void beSoundInfo_register();
void *beSoundInfo_getMetaCall();
}
extern "C" {
void beSoundInfo_arkRegister(){
 meta_registerNow((int)beSoundInfo_register);
}
void beSoundInfo_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beSoundInfo_meta,(int)beBaseInfo_register,(int)fn_802B2E3C,(int)beSoundInfo_getMetaCall,(int)beSoundInfo_className,40,(int)beSoundInfo_vtableRead,(int)beSoundInfo_fieldInit,0,(int)beSoundInfo_dependencies);
}
void *beSoundInfo_getMetaCall(){return beSoundInfo_getMeta();}
}
#pragma pop
