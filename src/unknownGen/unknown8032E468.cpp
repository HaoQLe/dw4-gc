#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024B94();
void *fn_800365B4();
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
extern char lbl_804E1C98[];
extern char lbl_804E1CA0[];
extern char lbl_804E1CA8[];
extern char lbl_804E1CB0[];
extern void *beNDMWShopCtrlA1_meta;
}
extern "C" {
void beNDMWShopCtrlA1_fieldInit(){
 void *value0=beNDMWShopCtrlA1_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804E1C98,2);
 void *value2=meta_field(value0,value1);
 void *value3=fn_80024B94();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_800365B4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+52)=1;
 meta_setupFields(value0,lbl_804E1CA0,lbl_804E1CA8,lbl_804E1CB0,value1);
}
}
#pragma pop
