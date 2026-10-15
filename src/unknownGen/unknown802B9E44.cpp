#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoManager_register();
void beShadow01_fieldInit();
void *beShadow01_getMeta();
void beShadow01_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B381C();
extern char beShadow01_className[];
extern char lbl_804CF6A0[];
extern char beShadow01_meta[];
void beShadow01_register();
void *beShadow01_getMetaCall();
}
extern "C" {
void beShadow01_registerNow(){
 meta_registerNow((int)beShadow01_register);
}
void beShadow01_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beShadow01_meta,(int)beBaseInfoManager_register,(int)fn_802B381C,(int)beShadow01_getMetaCall,(int)beShadow01_className,48,(int)beShadow01_vtableRead,(int)beShadow01_fieldInit,0,(int)lbl_804CF6A0);
}
void *beShadow01_getMetaCall(){return beShadow01_getMeta();}
}
#pragma pop
