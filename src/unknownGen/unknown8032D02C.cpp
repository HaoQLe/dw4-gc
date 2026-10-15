#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80036C40();
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
extern char lbl_804E1BE0[];
extern char lbl_804E1BE4[];
extern char lbl_804E1BE8[];
extern char lbl_804E1BEC[];
extern void *beNDMWShopCtrlDeviceSell_meta;
}
extern "C" {
void beNDMWShopCtrlDeviceSell_fieldInit(){
 void *value0=beNDMWShopCtrlDeviceSell_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804E1BE0,1);
 void *value2=meta_field(value0,value1);
 void *value3=fn_80036C40();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 meta_setupFields(value0,lbl_804E1BE4,lbl_804E1BE8,lbl_804E1BEC,value1);
}
}
#pragma pop
