#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800365B4();
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *beLua_metaObject();
extern char lbl_804D1788[];
extern char lbl_804D17AC[];
extern char lbl_804D17D0[];
extern char lbl_804D17F4[];
extern void *beMatCtrl_meta;
}
extern "C" {
void beMatCtrl_fieldInit(){
 void *value0=beMatCtrl_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804D1788,9);
 void *value2=meta_field(value0,(reinterpret_cast<char *>(value1)+4));
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+52)=(void *)4;
 void *value3=meta_field(value0,(reinterpret_cast<char *>(value1)+5));
 void *value4=fn_800365B4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value3)+56)=value4;
 void *value5=meta_field(value0,(reinterpret_cast<char *>(value1)+6));
 void *value6=fn_800365B4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value5)+56)=value6;
 void *value7=meta_field(value0,(reinterpret_cast<char *>(value1)+8));
 void *value8=beLua_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value7)+56)=value8;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value7)+60)=0;
 meta_setupFields(value0,lbl_804D17AC,lbl_804D17D0,lbl_804D17F4,value1);
}
}
#pragma pop
