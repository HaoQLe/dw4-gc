#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024B94();
void *meta_newMetaObject(void *);
void *fn_800365B4();
void fn_80053650(void *,int);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *beMessenger_metaObject();
void *beDataObjList_metaObject();
void *beBaseInfoManager_metaObject();
void fn_803250AC();
void beNDMWPanelWaza_arkRegister();
void igObject_register();
extern char lbl_80453438[];
extern char beNDMWPanelObject_className[];
extern char beNDMWPanelObject_dependencies[];
extern char beNDMWPanelObject_fieldTypes[];
extern char beNDMWPanelObject_fieldNames[];
extern char beNDMWPanelObject_fieldStorage[];
extern char beNDMWPanelObject_fieldOffsets[];
extern char lbl_804E2670[];
extern char lbl_804E269C[];
extern void *beNDMWPanelObject_meta;
extern void *lbl_8053614C;
extern void *beNDMWPanelWaza_meta;
extern void *lbl_805621F4;
void *beNDMWPanelObject_getMeta();
void beNDMWPanelObject_arkRegister();
void beNDMWPanelObject_register();
void *beNDMWPanelObject_getMetaCall();
void beNDMWPanelObject_fieldInit();
}
extern "C" {
void *fn_80338064(){
 if(!lbl_8053614C) lbl_8053614C=fn_800635C8(lbl_80453438,lbl_804E2670,lbl_804E269C,0xB);
 return lbl_8053614C;
}
}
#pragma pop
