#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWItemBase_register();
void *beNDMWItemDisk_getMeta();
void beNDMWItemDisk_vtableRead();
void *meta_createInstance(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_803425BC();
void beNDMWItemAbilityChip_arkRegister();
extern char beNDMWItemDisk_className[];
extern char beNDMWItemDisk_fieldTypes[];
extern char beNDMWItemDisk_fieldNames[];
extern char beNDMWItemDisk_fieldStorage[];
extern char beNDMWItemDisk_fieldOffsets[];
extern void *beNDMWItemDisk_meta;
extern void *beNDMWItemAbilityChip_meta;
void beNDMWItemDisk_register();
void *beNDMWItemDisk_getMetaCall();
void beNDMWItemDisk_fieldInit();
}
extern "C" {
void beNDMWItemDisk_arkRegister(){
 meta_registerNow((int)beNDMWItemDisk_register);
}
void beNDMWItemDisk_register(){
 fn_803250AC();
 meta_registerClass(0,(int)&beNDMWItemDisk_meta,(int)beNDMWItemBase_register,(int)fn_803425BC,(int)beNDMWItemDisk_getMetaCall,(int)beNDMWItemDisk_className,24,(int)beNDMWItemDisk_vtableRead,(int)beNDMWItemDisk_fieldInit,0,0);
}
void *beNDMWItemDisk_getMetaCall(){return beNDMWItemDisk_getMeta();}
void beNDMWItemDisk_fieldInit(){
 void *meta=beNDMWItemDisk_meta;
 void *field=meta_fieldCount(meta);
 meta_appendFields(meta,beNDMWItemDisk_fieldTypes,0x1);
 meta_setupFields(meta,beNDMWItemDisk_fieldNames,beNDMWItemDisk_fieldStorage,beNDMWItemDisk_fieldOffsets,field);
}
void *beNDMWItemAbilityChip_create(void *object){
 beNDMWItemAbilityChip_arkRegister();
 return meta_createInstance(beNDMWItemAbilityChip_meta,object);
}
void *beNDMWItemAbilityChip_getMeta(){
 if(!beNDMWItemAbilityChip_meta || !(reinterpret_cast<unsigned int *>(beNDMWItemAbilityChip_meta)[0x24/4]&4)) beNDMWItemAbilityChip_arkRegister();
 return beNDMWItemAbilityChip_meta;
}
}
#pragma pop
