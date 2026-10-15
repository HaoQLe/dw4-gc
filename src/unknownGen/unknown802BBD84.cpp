#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfo_register();
void *beSaveUtilInfo_getMeta();
void beSaveUtilInfo_vtableRead();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2E3C();
void beSaveUtil_registerNow();
extern char lbl_8041CD10[];
extern char beSaveUtilInfo_className[];
extern char lbl_804CF848[];
extern char lbl_804CF890[];
extern char beSaveUtilInfo_meta[];
extern void *lbl_8053482C;
extern void *beSaveUtil_meta;
extern void *lbl_805621F4;
void beSaveUtilInfo_register();
void *beSaveUtilInfo_getMetaCall();
}
extern "C" {
void beSaveUtilInfo_registerNow(){
 meta_registerNow((int)beSaveUtilInfo_register);
}
void beSaveUtilInfo_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beSaveUtilInfo_meta,(int)beBaseInfo_register,(int)fn_802B2E3C,(int)beSaveUtilInfo_getMetaCall,(int)beSaveUtilInfo_className,28,(int)beSaveUtilInfo_vtableRead,0,0,0);
}
void *beSaveUtilInfo_getMetaCall(){return beSaveUtilInfo_getMeta();}
void *fn_802BBE38(){
 if(!lbl_8053482C) lbl_8053482C=fn_800635C8(lbl_8041CD10,lbl_804CF848,lbl_804CF890,0x12);
 return lbl_8053482C;
}
void *beSaveUtil_create(void *object){
 beSaveUtil_registerNow();
 return meta_createInstance(beSaveUtil_meta,object);
}
void *beSaveUtil_metaObject(){
 if(!beSaveUtil_meta) beSaveUtil_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beSaveUtil_meta;
}
void *beSaveUtil_getMeta(){
 if(!beSaveUtil_meta || !(reinterpret_cast<unsigned int *>(beSaveUtil_meta)[0x24/4]&4)) beSaveUtil_registerNow();
 return beSaveUtil_meta;
}
}
#pragma pop
