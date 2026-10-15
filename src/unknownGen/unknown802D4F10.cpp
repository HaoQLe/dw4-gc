#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8003EC68(void *,int);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_801BDBA0();
void *beHitLandModelTraversal_metaObject();
void *beHitLandModelOrder_metaObject();
extern char lbl_804D1AF4[];
extern char lbl_804D1B08[];
extern char lbl_804D1B1C[];
extern char lbl_804D1B30[];
extern void *beHitLandModel_meta;
}
extern "C" {
void beHitLandModel_fieldInit(){
 void *value0=beHitLandModel_meta;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D1AF4,5);
 void *value2=fn_800658E4(value0,value1);
 void *value3=beHitLandModelOrder_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=beHitLandModelTraversal_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 void *value6=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+2));
 void *value7=fn_801BDBA0();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 void *value8=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+3));
 fn_8003EC68(value8,1);
 fn_800659C0(value0,lbl_804D1B08,lbl_804D1B1C,lbl_804D1B30,value1);
}
}
#pragma pop
