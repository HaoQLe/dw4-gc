#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80036C40();
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *beNDMWItemBaseList_metaObject();
extern char lbl_804E1B60[];
extern char lbl_804E1B68[];
extern char lbl_804E1B70[];
extern char lbl_804E1B78[];
extern void *beNDMWShopCtrlSales_meta;
}
extern "C" {
void beNDMWShopCtrlSales_fieldInit(){
 void *value0=beNDMWShopCtrlSales_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804E1B60,2);
 void *value2=meta_field(value0,value1);
 void *value3=beNDMWItemBaseList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_80036C40();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+52)=1;
 meta_setupFields(value0,lbl_804E1B68,lbl_804E1B70,lbl_804E1B78,value1);
}
}
#pragma pop
