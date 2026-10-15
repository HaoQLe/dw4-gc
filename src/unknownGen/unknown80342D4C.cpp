#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWItemAbilityChip_getMeta();
void beNDMWItemAbilityChip_vtableRead();
void beNDMWItemBase_register();
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_803425BC();
void beNDMWItemYellowArmor_registerNow();
extern char beNDMWItemAbilityChip_className[];
extern char beNDMWItemAbilityChip_meta[];
extern void *beNDMWItemYellowArmor_meta;
void beNDMWItemAbilityChip_register();
void *beNDMWItemAbilityChip_getMetaCall();
}
extern "C" {
void beNDMWItemAbilityChip_registerNow(){
 meta_registerNow((int)beNDMWItemAbilityChip_register);
}
void beNDMWItemAbilityChip_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWItemAbilityChip_meta,(int)beNDMWItemBase_register,(int)fn_803425BC,(int)beNDMWItemAbilityChip_getMetaCall,(int)beNDMWItemAbilityChip_className,20,(int)beNDMWItemAbilityChip_vtableRead,0,0,0);
}
void *beNDMWItemAbilityChip_getMetaCall(){return beNDMWItemAbilityChip_getMeta();}
void *beNDMWItemYellowArmor_create(void *object){
 beNDMWItemYellowArmor_registerNow();
 return meta_createInstance(beNDMWItemYellowArmor_meta,object);
}
void *beNDMWItemYellowArmor_getMeta(){
 if(!beNDMWItemYellowArmor_meta || !(reinterpret_cast<unsigned int *>(beNDMWItemYellowArmor_meta)[0x24/4]&4)) beNDMWItemYellowArmor_registerNow();
 return beNDMWItemYellowArmor_meta;
}
}
#pragma pop
