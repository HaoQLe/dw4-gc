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
void beNDMWPanelWaza_registerNow();
void igObject_register();
extern char lbl_80453438[];
extern char beNDMWPanelObject_className[];
extern char lbl_804E2558[];
extern char lbl_804E2570[];
extern char lbl_804E25B0[];
extern char lbl_804E25F0[];
extern char lbl_804E2630[];
extern char lbl_804E2670[];
extern char lbl_804E269C[];
extern void *beNDMWPanelObject_meta;
extern void *lbl_8053614C;
extern void *beNDMWPanelWaza_meta;
extern void *lbl_805621F4;
void *beNDMWPanelObject_getMeta();
void beNDMWPanelObject_registerNow();
void beNDMWPanelObject_register();
void *beNDMWPanelObject_getMetaCall();
void beNDMWPanelObject_fieldInit();
}
extern "C" {
void *beNDMWPanelObject_getMeta(){
 if(!beNDMWPanelObject_meta || !(reinterpret_cast<unsigned int *>(beNDMWPanelObject_meta)[0x24/4]&4)) beNDMWPanelObject_registerNow();
 return beNDMWPanelObject_meta;
}
void beNDMWPanelObject_registerNow(){
 meta_registerNow((int)beNDMWPanelObject_register);
}
void beNDMWPanelObject_register(){
 fn_803250AC();
 meta_registerClass(1,(int)&beNDMWPanelObject_meta,(int)igObject_register,(int)fn_800237D0,(int)beNDMWPanelObject_getMetaCall,(int)beNDMWPanelObject_className,60,0,(int)beNDMWPanelObject_fieldInit,0,(int)lbl_804E2558);
}
void *beNDMWPanelObject_getMetaCall(){return beNDMWPanelObject_getMeta();}
void beNDMWPanelObject_fieldInit(){
 void *value0=beNDMWPanelObject_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804E2570,16);
 void *value2=meta_field(value0,value1);
 void *value3=beBaseInfoManager_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+60)=0;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=beMessenger_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+60)=0;
 void *value6=meta_field(value0,(reinterpret_cast<char *>(value1)+6));
 fn_80053650(value6,2);
 void *value7=meta_field(value0,(reinterpret_cast<char *>(value1)+7));
 void *value8=beDataObjList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value7)+56)=value8;
 void *value9=meta_field(value0,(reinterpret_cast<char *>(value1)+12));
 void *value10=fn_80024B94();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value9)+56)=value10;
 void *value11=meta_field(value0,(reinterpret_cast<char *>(value1)+13));
 void *value12=fn_800365B4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value11)+56)=value12;
 meta_setupFields(value0,lbl_804E25B0,lbl_804E25F0,lbl_804E2630,value1);
}
void *fn_80338064(){
 if(!lbl_8053614C) lbl_8053614C=fn_800635C8(lbl_80453438,lbl_804E2670,lbl_804E269C,0xB);
 return lbl_8053614C;
}
void *beNDMWPanelWaza_create(void *object){
 beNDMWPanelWaza_registerNow();
 return meta_createInstance(beNDMWPanelWaza_meta,object);
}
void *beNDMWPanelWaza_metaObject(){
 if(!beNDMWPanelWaza_meta) beNDMWPanelWaza_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beNDMWPanelWaza_meta;
}
void *beNDMWPanelWaza_getMeta(){
 if(!beNDMWPanelWaza_meta || !(reinterpret_cast<unsigned int *>(beNDMWPanelWaza_meta)[0x24/4]&4)) beNDMWPanelWaza_registerNow();
 return beNDMWPanelWaza_meta;
}
}
#pragma pop
