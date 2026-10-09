#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWItemAbilityChip_getMeta();
void beNDMWItemAbilityChip_vtableRead();
void beNDMWItemBase_register();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_803425BC();
void fn_80342EE8();
extern char lbl_80455160[];
extern char lbl_80536744[];
extern void *lbl_80536748;
void beNDMWItemAbilityChip_register();
void *beNDMWItemAbilityChip_getMetaCall();
}
extern "C" {
void fn_80342D4C(){
 fn_80066188((int)beNDMWItemAbilityChip_register);
}
void beNDMWItemAbilityChip_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536744,(int)beNDMWItemBase_register,(int)fn_803425BC,(int)beNDMWItemAbilityChip_getMetaCall,(int)lbl_80455160,20,(int)beNDMWItemAbilityChip_vtableRead,0,0,0);
}
void *beNDMWItemAbilityChip_getMetaCall(){return beNDMWItemAbilityChip_getMeta();}
void *fn_80342E00(void *object){
 fn_80342EE8();
 return fn_8006546C(lbl_80536748,object);
}
void *beNDMWItemYellowArmor_getMeta(){
 if(!lbl_80536748 || !(reinterpret_cast<unsigned int *>(lbl_80536748)[0x24/4]&4)) fn_80342EE8();
 return lbl_80536748;
}
}
#pragma pop
