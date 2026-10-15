#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWStatusCtrl00_getMeta();
void beNDMWStatusCtrl00_vtableRead();
void beNDMWWindow_register();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_803287A8();
void *fn_8032B8A4();
void beNDMWStatus_arkRegister();
extern char lbl_80453438[];
extern char beNDMWStatusCtrl00_className[];
extern char beNDMWListCtrl_className[];
extern char beNDMWWindowCtrl_className[];
extern char beNDMWStatusCtrl00_fieldTypes[];
extern char beNDMWStatusCtrl00_fieldNames[];
extern char beNDMWStatusCtrl00_fieldStorage[];
extern char beNDMWStatusCtrl00_fieldOffsets[];
extern char beNDMWListCtrl_fieldTypes[];
extern char beNDMWListCtrl_fieldNames[];
extern char beNDMWListCtrl_fieldStorage[];
extern char beNDMWListCtrl_fieldOffsets[];
extern char beNDMWWindowCtrl_fieldTypes[];
extern char beNDMWWindowCtrl_fieldNames[];
extern char beNDMWWindowCtrl_fieldStorage[];
extern char beNDMWWindowCtrl_fieldOffsets[];
extern char lbl_804E20B4[];
extern char lbl_804E20D0[];
extern void *beNDMWStatusCtrl00_meta;
extern void *beNDMWListCtrl_meta;
extern void *beNDMWWindowCtrl_meta;
extern void *lbl_80535FB4;
extern void *beNDMWStatus_meta;
extern void *lbl_805621F4;
void beNDMWStatusCtrl00_register();
void *beNDMWStatusCtrl00_getMetaCall();
void beNDMWStatusCtrl00_fieldInit();
void *beNDMWListCtrl_getMeta();
void beNDMWListCtrl_arkRegister();
void beNDMWListCtrl_register();
void *beNDMWListCtrl_getMetaCall();
void beNDMWListCtrl_fieldInit();
void *beNDMWWindowCtrl_getMeta();
void beNDMWWindowCtrl_arkRegister();
void beNDMWWindowCtrl_register();
void *beNDMWWindowCtrl_getMetaCall();
void beNDMWWindowCtrl_fieldInit();
}
extern "C" {
void *fn_80334024(){
 if(!lbl_80535FB4) lbl_80535FB4=fn_800635C8(lbl_80453438,lbl_804E20B4,lbl_804E20D0,0x7);
 return lbl_80535FB4;
}
}
#pragma pop
