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
void *beNDMWPanelObjectStat_metaObject();
void *beNDMWPanelObjectItem_metaObject();
void *beNDMWPanelObjectWaza_metaObject();
void *beNDMWMdlPlayerInfoWork_metaObject();
extern char lbl_804E2410[];
extern char lbl_804E243C[];
extern char lbl_804E2468[];
extern char lbl_804E2494[];
extern void *beNDMWPanelWazaInfoWork_meta;
}
extern "C" {
void beNDMWPanelWazaInfoWork_fieldInit(){
 void *value0=beNDMWPanelWazaInfoWork_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804E2410,11);
 void *value2=meta_field(value0,(reinterpret_cast<char *>(value1)+3));
 void *value3=beNDMWPanelObjectWaza_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+4));
 void *value5=beNDMWPanelObjectItem_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+52)=1;
 void *value6=meta_field(value0,(reinterpret_cast<char *>(value1)+5));
 void *value7=beNDMWPanelObjectStat_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value6)+52)=1;
 void *value8=meta_field(value0,(reinterpret_cast<char *>(value1)+8));
 void *value9=beNDMWMdlPlayerInfoWork_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value8)+56)=value9;
 void *value10=meta_field(value0,(reinterpret_cast<char *>(value1)+9));
 void *value11=fn_80024B94();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value10)+56)=value11;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value10)+52)=1;
 void *value12=meta_field(value0,(reinterpret_cast<char *>(value1)+10));
 void *value13=fn_800365B4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value12)+56)=value13;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value12)+52)=1;
 meta_setupFields(value0,lbl_804E243C,lbl_804E2468,lbl_804E2494,value1);
}
}
#pragma pop
