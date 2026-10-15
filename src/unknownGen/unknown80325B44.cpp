#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWWindowList_getMeta();
void beNDMWWindowList_vtableRead();
void *fn_800237D0();
void *fn_80024180();
void *fn_80024B94();
void *meta_newMetaObject(void *);
void *fn_800365B4();
void fn_8003EC68(void *,int);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *igInsightCore_metaObject();
void *bePadManager_metaObject();
void *beMessenger_metaObject();
void fn_803250AC();
void *beNDMWWindowList_metaObject();
void beNDMWTitle2Info_arkRegister();
void igObjectList_register();
void igObject_register();
extern char beNDMWWindowList_className[];
extern char lbl_80453220[];
extern char beNDMWWindow_className[];
extern char beNDMWWindowList_dependencies[];
extern char lbl_804E16B0[];
extern char lbl_804E16DC[];
extern char beNDMWWindow_dependencies[];
extern char beNDMWWindow_fieldTypes[];
extern char beNDMWWindow_fieldNames[];
extern char beNDMWWindow_fieldStorage[];
extern char beNDMWWindow_fieldOffsets[];
extern char beNDMWWindowList_meta[];
extern void *lbl_80535C7C;
extern void *beNDMWWindow_meta;
extern void *beNDMWTitle2Info_meta;
extern void *lbl_805621F4;
void beNDMWWindowList_register();
void *beNDMWWindowList_getMetaCall();
void *beNDMWWindow_metaObject();
void *beNDMWWindow_getMeta();
void beNDMWWindow_arkRegister();
void beNDMWWindow_register();
void *beNDMWWindow_getMetaCall();
void beNDMWWindow_fieldInit();
}
extern "C" {
void *fn_80325B44(){
 if(!lbl_80535C7C) lbl_80535C7C=fn_800635C8(lbl_80453220,lbl_804E16B0,lbl_804E16DC,0xB);
 return lbl_80535C7C;
}
}
#pragma pop
