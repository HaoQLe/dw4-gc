#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern void *beNDMWItemWaza_meta;
extern void *beNDMWItemImportant_meta;
extern void *beNDMWItemInstant_meta;
extern void *beNDMWItemDisk_meta;
extern void *beNDMWItemAbilityChip_meta;
extern void *beNDMWItemYellowArmor_meta;
extern void *beNDMWItemBlueArmor_meta;
extern void *beNDMWItemWeapon_meta;
}
extern "C" {
void *fn_803B17B0(int p0,int p1,int p2){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+12)=(void *)p1;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+20)=(void *)p2;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+8)=(void *)9;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+16)=0;
 return (void *)p0;
}
void *beNDMWItemWaza_virtual58(){return beNDMWItemWaza_meta;}
void *beNDMWItemImportant_virtual58(){return beNDMWItemImportant_meta;}
void *beNDMWItemInstant_virtual58(){return beNDMWItemInstant_meta;}
void *beNDMWItemDisk_virtual58(){return beNDMWItemDisk_meta;}
void *beNDMWItemAbilityChip_virtual58(){return beNDMWItemAbilityChip_meta;}
void *beNDMWItemYellowArmor_virtual58(){return beNDMWItemYellowArmor_meta;}
void *beNDMWItemBlueArmor_virtual58(){return beNDMWItemBlueArmor_meta;}
void *beNDMWItemWeapon_virtual58(){return beNDMWItemWeapon_meta;}
}
#pragma pop
