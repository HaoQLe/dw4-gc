#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void beNDMWItemImportant_registerNow();
extern char lbl_804E3D00[];
extern char lbl_804E3D04[];
extern char lbl_804E3D08[];
extern char lbl_804E3D0C[];
extern void *beNDMWItemWaza_meta;
extern void *beNDMWItemImportant_meta;
}
extern "C" {
void beNDMWItemWaza_fieldInit(){
 void *meta=beNDMWItemWaza_meta;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804E3D00,0x1);
 fn_800659C0(meta,lbl_804E3D04,lbl_804E3D08,lbl_804E3D0C,field);
}
void *beNDMWItemImportant_create(void *object){
 beNDMWItemImportant_registerNow();
 return meta_createInstance(beNDMWItemImportant_meta,object);
}
void *beNDMWItemImportant_getMeta(){
 if(!beNDMWItemImportant_meta || !(reinterpret_cast<unsigned int *>(beNDMWItemImportant_meta)[0x24/4]&4)) beNDMWItemImportant_registerNow();
 return beNDMWItemImportant_meta;
}
}
#pragma pop
