#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfo_register();
void *beNumberCtrlInfo_getMeta();
void beNumberCtrlInfo_vtableRead();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2E3C();
void beNumberCtrl_arkRegister();
extern char lbl_8041CD10[];
extern char beNumberCtrlInfo_className[];
extern char lbl_804D0450[];
extern char lbl_804D0460[];
extern char beNumberCtrlInfo_meta[];
extern void *lbl_80534B8C;
extern void *beNumberCtrl_meta;
extern void *lbl_805621F4;
void beNumberCtrlInfo_register();
void *beNumberCtrlInfo_getMetaCall();
}
extern "C" {
void *fn_802C3E9C(){
 if(!lbl_80534B8C) lbl_80534B8C=fn_800635C8(lbl_8041CD10,lbl_804D0450,lbl_804D0460,0x4);
 return lbl_80534B8C;
}
}
#pragma pop
