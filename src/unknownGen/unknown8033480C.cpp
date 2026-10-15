#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfo_register();
void *beNDMWStageCtlInfo_getMeta();
void beNDMWStageCtlInfo_vtableRead();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B2E3C();
void fn_803250AC();
void beNDMWStageCtl_arkRegister();
extern char lbl_80453438[];
extern char beNDMWStageCtlInfo_className[];
extern char lbl_804E2124[];
extern char lbl_804E2130[];
extern char beNDMWStageCtlInfo_meta[];
extern void *lbl_80535FD0;
extern void *beNDMWStageCtl_meta;
extern void *lbl_805621F4;
void beNDMWStageCtlInfo_register();
void *beNDMWStageCtlInfo_getMetaCall();
}
extern "C" {
void *fn_8033480C(){
 if(!lbl_80535FD0) lbl_80535FD0=fn_800635C8(lbl_80453438,lbl_804E2124,lbl_804E2130,0x3);
 return lbl_80535FD0;
}
}
#pragma pop
