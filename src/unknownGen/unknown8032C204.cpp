#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *beNDMWItemBaseList_metaObject();
extern char lbl_804E1B44[];
extern char lbl_804E1B48[];
extern char lbl_804E1B4C[];
extern char lbl_804E1B50[];
extern void *beNDMWShopCtrlXdataChip_meta;
}
extern "C" {
void beNDMWShopCtrlXdataChip_fieldInit(){
 void *value0=beNDMWShopCtrlXdataChip_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804E1B44,1);
 void *value2=meta_field(value0,value1);
 void *value3=beNDMWItemBaseList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 meta_setupFields(value0,lbl_804E1B48,lbl_804E1B4C,lbl_804E1B50,value1);
}
}
#pragma pop
