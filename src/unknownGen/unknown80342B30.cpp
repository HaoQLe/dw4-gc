#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWItemBase_register();
void *beNDMWItemDisk_getMeta();
void beNDMWItemDisk_vtableRead();
void *fn_8006546C(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_803425BC();
void fn_80342D4C();
extern char lbl_80455150[];
extern char lbl_804E3D20[];
extern char lbl_804E3D24[];
extern char lbl_804E3D28[];
extern char lbl_804E3D2C[];
extern void *lbl_8053673C;
extern void *lbl_80536744;
void beNDMWItemDisk_register();
void *beNDMWItemDisk_getMetaCall();
void beNDMWItemDisk_fieldInit();
}
extern "C" {
void fn_80342B30(){
 fn_80066188((int)beNDMWItemDisk_register);
}
void beNDMWItemDisk_register(){
 fn_803250AC();
 fn_80066204(0,(int)&lbl_8053673C,(int)beNDMWItemBase_register,(int)fn_803425BC,(int)beNDMWItemDisk_getMetaCall,(int)lbl_80455150,24,(int)beNDMWItemDisk_vtableRead,(int)beNDMWItemDisk_fieldInit,0,0);
}
void *beNDMWItemDisk_getMetaCall(){return beNDMWItemDisk_getMeta();}
void beNDMWItemDisk_fieldInit(){
 void *meta=lbl_8053673C;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804E3D20,0x1);
 fn_800659C0(meta,lbl_804E3D24,lbl_804E3D28,lbl_804E3D2C,field);
}
void *fn_80342C6C(void *object){
 fn_80342D4C();
 return fn_8006546C(lbl_80536744,object);
}
void *beNDMWItemAbilityChip_getMeta(){
 if(!lbl_80536744 || !(reinterpret_cast<unsigned int *>(lbl_80536744)[0x24/4]&4)) fn_80342D4C();
 return lbl_80536744;
}
}
#pragma pop
