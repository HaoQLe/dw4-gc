#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfo_register();
void *beWaterPlainInfo_getMeta();
void beWaterPlainInfo_vtableRead();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2E3C();
void beWaterPlain_arkRegister();
extern char beWaterPlainInfo_className[];
extern char lbl_8041CD10[];
extern char lbl_804CF0BC[];
extern char lbl_804CF0C0[];
extern char beWaterPlainInfo_meta[];
extern void *lbl_8053461C;
extern void *beWaterPlain_meta;
extern void *lbl_805621F4;
void beWaterPlainInfo_register();
void *beWaterPlainInfo_getMetaCall();
}
extern "C" {
void *fn_802B4E44(){
 if(!lbl_8053461C) lbl_8053461C=fn_800635C8(lbl_8041CD10,lbl_804CF0BC,lbl_804CF0C0,0x1);
 return lbl_8053461C;
}
}
#pragma pop
