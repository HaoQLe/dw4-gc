#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029A5C();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_801B7354();
void beWeaponSeqDataList_registerNow();
extern char lbl_804CEDA0[];
extern char lbl_804CEDAC[];
extern char lbl_804CEDB8[];
extern char lbl_804CEDC4[];
extern void *beWeaponInfo_meta;
extern void *beWeaponSeqDataList_meta;
extern void *lbl_805621F4;
void *beWeaponSeqDataList_metaObject();
}
extern "C" {
void beWeaponInfo_fieldInit(){
 void *value0=beWeaponInfo_meta;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804CEDA0,3);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_801B7354();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_80029A5C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+52)=1;
 void *value6=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+2));
 void *value7=beWeaponSeqDataList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value6)+52)=1;
 fn_800659C0(value0,lbl_804CEDAC,lbl_804CEDB8,lbl_804CEDC4,value1);
}
void *beWeaponSeqDataList_metaObject(){
 if(!beWeaponSeqDataList_meta) beWeaponSeqDataList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beWeaponSeqDataList_meta;
}
void *beWeaponSeqDataList_getMeta(){
 if(!beWeaponSeqDataList_meta || !(reinterpret_cast<unsigned int *>(beWeaponSeqDataList_meta)[0x24/4]&4)) beWeaponSeqDataList_registerNow();
 return beWeaponSeqDataList_meta;
}
}
#pragma pop
