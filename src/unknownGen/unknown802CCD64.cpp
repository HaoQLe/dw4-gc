#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoManager_register();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B381C();
void *beTargetObj_metaObject();
void beMeterCtrlNode_arkRegister();
void *beLua_metaObject();
extern char lbl_8041CA68[];
extern char beModelCtrl_className[];
extern char lbl_804D1084[];
extern char lbl_804D1108[];
extern char beModelCtrl_dependencies[];
extern char beModelCtrl_fieldTypes[];
extern char beModelCtrl_fieldNames[];
extern char beModelCtrl_fieldStorage[];
extern char beModelCtrl_fieldOffsets[];
extern void *lbl_80534F48;
extern void *beModelCtrl_meta;
extern void *beMeterCtrlNode_meta;
extern void *lbl_805621F4;
void *beModelCtrl_getMeta();
void beModelCtrl_arkRegister();
void beModelCtrl_register();
void *beModelCtrl_getMetaCall();
void beModelCtrl_fieldInit();
}
extern "C" {
void *fn_802CCD64(){
 if(!lbl_80534F48) lbl_80534F48=fn_800635C8(lbl_8041CA68,lbl_804D1084,lbl_804D1108,0x21);
 return lbl_80534F48;
}
}
#pragma pop
