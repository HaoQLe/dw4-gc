#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800365B4();
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *beNDMWStatusTitle03_metaObject();
extern char lbl_804E1CC4[];
extern char lbl_804E1CCC[];
extern char lbl_804E1CD4[];
extern char lbl_804E1CDC[];
extern void *beNDMWShopCtrlA0_meta;
}
extern "C" {
void beNDMWShopCtrlA0_fieldInit(){
 void *value0=beNDMWShopCtrlA0_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804E1CC4,2);
 void *value2=meta_field(value0,value1);
 void *value3=beNDMWStatusTitle03_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_800365B4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+52)=1;
 meta_setupFields(value0,lbl_804E1CCC,lbl_804E1CD4,lbl_804E1CDC,value1);
}
}
#pragma pop
