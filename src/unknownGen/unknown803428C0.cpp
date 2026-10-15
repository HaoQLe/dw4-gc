#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWItemBase_register();
void *beNDMWItemInstant_getMeta();
void beNDMWItemInstant_vtableRead();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_803425BC();
void beNDMWItemDisk_arkRegister();
extern char beNDMWItemInstant_className[];
extern char beNDMWItemInstant_fieldTypes[];
extern char beNDMWItemInstant_fieldNames[];
extern char beNDMWItemInstant_fieldStorage[];
extern char beNDMWItemInstant_fieldOffsets[];
extern void *beNDMWItemInstant_meta;
extern void *beNDMWItemDisk_meta;
extern void *lbl_805621F4;
void beNDMWItemInstant_register();
void *beNDMWItemInstant_getMetaCall();
void beNDMWItemInstant_fieldInit();
}
extern "C" {
void beNDMWItemInstant_arkRegister(){
 meta_registerNow((int)beNDMWItemInstant_register);
}
void beNDMWItemInstant_register(){
 fn_803250AC();
 meta_registerClass(0,(int)&beNDMWItemInstant_meta,(int)beNDMWItemBase_register,(int)fn_803425BC,(int)beNDMWItemInstant_getMetaCall,(int)beNDMWItemInstant_className,24,(int)beNDMWItemInstant_vtableRead,(int)beNDMWItemInstant_fieldInit,0,0);
}
void *beNDMWItemInstant_getMetaCall(){return beNDMWItemInstant_getMeta();}
void beNDMWItemInstant_fieldInit(){
 void *meta=beNDMWItemInstant_meta;
 void *field=meta_fieldCount(meta);
 meta_appendFields(meta,beNDMWItemInstant_fieldTypes,0x1);
 meta_setupFields(meta,beNDMWItemInstant_fieldNames,beNDMWItemInstant_fieldStorage,beNDMWItemInstant_fieldOffsets,field);
}
void *beNDMWItemDisk_create(void *object){
 beNDMWItemDisk_arkRegister();
 return meta_createInstance(beNDMWItemDisk_meta,object);
}
void *beNDMWItemDisk_metaObject(){
 if(!beNDMWItemDisk_meta) beNDMWItemDisk_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beNDMWItemDisk_meta;
}
void *beNDMWItemDisk_getMeta(){
 if(!beNDMWItemDisk_meta || !(reinterpret_cast<unsigned int *>(beNDMWItemDisk_meta)[0x24/4]&4)) beNDMWItemDisk_arkRegister();
 return beNDMWItemDisk_meta;
}
}
#pragma pop
