#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void fn_8004D4BC(void *,float);
void *fn_800607F4(void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8011148C();
void fn_801AA6DC();
void igGroup_register();
void *igTimeTransform1_5_getMeta();
void igTimeTransform1_5_vtableRead();
void *igTimeTransform_fieldInit();
extern char igTimeTransform1_5_className[];
extern char igTimeTransform_className[];
extern char igTimeTransform1_5_fieldTypes[8];
extern char igTimeTransform1_5_fieldNames[8];
extern char igTimeTransform1_5_fieldStorage[8];
extern char igTimeTransform1_5_fieldOffsets[8];
extern void *lbl_805621F4;
extern void *igTimeTransform1_5_meta;
extern void *igTimeTransform_meta;
extern char lbl_80566CA4[4];
void igTimeTransform1_5_register();
void *igTimeTransform1_5_getMetaCall();
void *igTimeTransform1_5_parentMeta();
void igTimeTransform1_5_fieldInit();
void *igTimeTransform_getMeta();
void igTimeTransform_arkRegister();
void igTimeTransform_register();
void *igTimeTransform_getMetaCall();
}
extern "C" {
void *fn_801ACDA4(){
 if(!igTimeTransform_meta) igTimeTransform_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igTimeTransform_meta;
}
void *igTimeTransform_getMeta(){
 if(!igTimeTransform_meta || !(reinterpret_cast<unsigned int *>(igTimeTransform_meta)[0x24/4]&4)) igTimeTransform_arkRegister();
 return igTimeTransform_meta;
}
void igTimeTransform_arkRegister(){
 meta_registerNow((int)igTimeTransform_register);
}
void igTimeTransform_register(){
 fn_801AA6DC();
 meta_registerClass(1,(int)&igTimeTransform_meta,(int)igGroup_register,(int)fn_8011148C,(int)igTimeTransform_getMetaCall,(int)igTimeTransform_className,48,0,(int)igTimeTransform_fieldInit,0,0);
}
void *igTimeTransform_getMetaCall(){return igTimeTransform_getMeta();}
}
#pragma pop
