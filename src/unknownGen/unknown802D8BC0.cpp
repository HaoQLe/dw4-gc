#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfo_register();
void beFontInfo_fieldInit();
void *beFontInfo_getMeta();
void beFontInfo_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2E3C();
extern char beFontInfo_className[];
extern char beFontInfo_dependencies[];
extern char beFontInfo_meta[];
void beFontInfo_register();
void *beFontInfo_getMetaCall();
}
extern "C" {
void beFontInfo_arkRegister(){
 meta_registerNow((int)beFontInfo_register);
}
void beFontInfo_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beFontInfo_meta,(int)beBaseInfo_register,(int)fn_802B2E3C,(int)beFontInfo_getMetaCall,(int)beFontInfo_className,32,(int)beFontInfo_vtableRead,(int)beFontInfo_fieldInit,0,(int)beFontInfo_dependencies);
}
void *beFontInfo_getMetaCall(){return beFontInfo_getMeta();}
}
#pragma pop
