#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024FEC();
void *fn_80034D84();
void *fn_800365B4();
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *fn_801C89F0();
void *beFontImageList_metaObject();
void *beFontGeomAttrPairList_metaObject();
extern char lbl_804D20E4[];
extern char lbl_804D210C[];
extern char lbl_804D2134[];
extern char lbl_804D215C[];
extern void *beFont_meta;
}
extern "C" {
void beFont_fieldInit(){
 void *value0=beFont_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804D20E4,10);
 void *value2=meta_field(value0,value1);
 void *value3=fn_801C89F0();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=beFontImageList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+52)=1;
 void *value6=meta_field(value0,(reinterpret_cast<char *>(value1)+3));
 void *value7=beFontGeomAttrPairList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value6)+52)=1;
 void *value8=meta_field(value0,(reinterpret_cast<char *>(value1)+4));
 void *value9=fn_800365B4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value8)+56)=value9;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value8)+52)=1;
 void *value10=meta_field(value0,(reinterpret_cast<char *>(value1)+5));
 void *value11=fn_80034D84();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value10)+56)=value11;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value10)+52)=1;
 void *value12=meta_field(value0,(reinterpret_cast<char *>(value1)+6));
 void *value13=fn_80024FEC();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value12)+56)=value13;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value12)+52)=1;
 meta_setupFields(value0,lbl_804D210C,lbl_804D2134,lbl_804D215C,value1);
}
}
#pragma pop
