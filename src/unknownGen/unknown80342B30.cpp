#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWItemBase_register();
void *beNDMWItemDisk_getMeta();
void beNDMWItemDisk_vtableRead();
void *meta_createInstance(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_803425BC();
void beNDMWItemAbilityChip_registerNow();
extern char beNDMWItemDisk_className[];
extern char lbl_804E3D20[];
extern char lbl_804E3D24[];
extern char lbl_804E3D28[];
extern char lbl_804E3D2C[];
extern void *beNDMWItemDisk_meta;
extern void *beNDMWItemAbilityChip_meta;
void beNDMWItemDisk_register();
void *beNDMWItemDisk_getMetaCall();
void beNDMWItemDisk_fieldInit();
}
extern "C" {
void beNDMWItemDisk_registerNow(){
 meta_registerNow((int)beNDMWItemDisk_register);
}
void beNDMWItemDisk_register(){
 fn_803250AC();
 meta_registerClass(0,(int)&beNDMWItemDisk_meta,(int)beNDMWItemBase_register,(int)fn_803425BC,(int)beNDMWItemDisk_getMetaCall,(int)beNDMWItemDisk_className,24,(int)beNDMWItemDisk_vtableRead,(int)beNDMWItemDisk_fieldInit,0,0);
}
void *beNDMWItemDisk_getMetaCall(){return beNDMWItemDisk_getMeta();}
void beNDMWItemDisk_fieldInit(){
 void *meta=beNDMWItemDisk_meta;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804E3D20,0x1);
 fn_800659C0(meta,lbl_804E3D24,lbl_804E3D28,lbl_804E3D2C,field);
}
void *beNDMWItemAbilityChip_create(void *object){
 beNDMWItemAbilityChip_registerNow();
 return meta_createInstance(beNDMWItemAbilityChip_meta,object);
}
void *beNDMWItemAbilityChip_getMeta(){
 if(!beNDMWItemAbilityChip_meta || !(reinterpret_cast<unsigned int *>(beNDMWItemAbilityChip_meta)[0x24/4]&4)) beNDMWItemAbilityChip_registerNow();
 return beNDMWItemAbilityChip_meta;
}
}
#pragma pop
