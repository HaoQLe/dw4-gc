#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *beNDMWShinkaCtrl_metaObject();
extern char lbl_804E1D5C[];
extern char lbl_804E1D60[];
extern char lbl_804E1D64[];
extern char lbl_804E1D68[];
extern void *beNDMWShopCtrlEvolve_meta;
}
extern "C" {
void beNDMWShopCtrlEvolve_fieldInit(){
 void *value0=beNDMWShopCtrlEvolve_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804E1D5C,1);
 void *value2=meta_field(value0,value1);
 void *value3=beNDMWShinkaCtrl_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 meta_setupFields(value0,lbl_804E1D60,lbl_804E1D64,lbl_804E1D68,value1);
}
}
#pragma pop
