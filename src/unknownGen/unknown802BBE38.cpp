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
void beSaveUtil_arkRegister();
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
void *fn_802BBE38(){
 if(!lbl_8053482C) lbl_8053482C=fn_800635C8(lbl_8041CD10,lbl_804CF848,lbl_804CF890,0x12);
 return lbl_8053482C;
}
}
#pragma pop
