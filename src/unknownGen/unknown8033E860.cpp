#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *beSystem_metaObject();
void *bePadManager_metaObject();
extern char lbl_804E3560[];
extern char lbl_804E3570[];
extern char lbl_804E3580[];
extern char lbl_804E3590[];
extern void *beNDMWLoadIntf2_meta;
}
extern "C" {
void beNDMWLoadIntf2_fieldInit(){
 void *value0=beNDMWLoadIntf2_meta;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804E3560,4);
 void *value2=fn_800658E4(value0,value1);
 void *value3=bePadManager_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=beSystem_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+60)=0;
 fn_800659C0(value0,lbl_804E3570,lbl_804E3580,lbl_804E3590,value1);
}
}
#pragma pop
