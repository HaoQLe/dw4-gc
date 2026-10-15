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
void *beModelCtrl_getMeta(){
 if(!beModelCtrl_meta || !(reinterpret_cast<unsigned int *>(beModelCtrl_meta)[0x24/4]&4)) beModelCtrl_arkRegister();
 return beModelCtrl_meta;
}
void beModelCtrl_arkRegister(){
 meta_registerNow((int)beModelCtrl_register);
}
void beModelCtrl_register(){
 fn_802B1AC8();
 meta_registerClass(1,(int)&beModelCtrl_meta,(int)beBaseInfoManager_register,(int)fn_802B381C,(int)beModelCtrl_getMetaCall,(int)beModelCtrl_className,44,0,(int)beModelCtrl_fieldInit,0,(int)beModelCtrl_dependencies);
}
void *beModelCtrl_getMetaCall(){return beModelCtrl_getMeta();}
void beModelCtrl_fieldInit(){
 void *value0=beModelCtrl_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beModelCtrl_fieldTypes,3);
 void *value2=meta_field(value0,value1);
 void *value3=beLua_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+60)=0;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=beTargetObj_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+60)=0;
 meta_setupFields(value0,beModelCtrl_fieldNames,beModelCtrl_fieldStorage,beModelCtrl_fieldOffsets,value1);
}
void *beMeterCtrlNode_metaObject(){
 if(!beMeterCtrlNode_meta) beMeterCtrlNode_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beMeterCtrlNode_meta;
}
void *beMeterCtrlNode_getMeta(){
 if(!beMeterCtrlNode_meta || !(reinterpret_cast<unsigned int *>(beMeterCtrlNode_meta)[0x24/4]&4)) beMeterCtrlNode_arkRegister();
 return beMeterCtrlNode_meta;
}
}
#pragma pop
