#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800365B4();
void fn_80040030(void *,int);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *beSvPlatBaseData_metaObject();
void *beSaveDataDeliver_metaObject();
extern char lbl_804CFEA4[];
extern char lbl_804CFEEC[];
extern char lbl_804CFF34[];
extern char lbl_804CFF7C[];
extern void *beSvDeliver_meta;
}
extern "C" {
void beSvDeliver_fieldInit(){
 void *value0=beSvDeliver_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804CFEA4,18);
 void *value2=meta_field(value0,value1);
 void *value3=fn_800365B4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+7));
 fn_80040030(value4,-1);
 void *value5=meta_field(value0,(reinterpret_cast<char *>(value1)+8));
 fn_80040030(value5,0);
 void *value6=meta_field(value0,(reinterpret_cast<char *>(value1)+12));
 void *value7=fn_800365B4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value6)+52)=1;
 void *value8=meta_field(value0,(reinterpret_cast<char *>(value1)+13));
 void *value9=fn_800365B4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value8)+56)=value9;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value8)+52)=1;
 void *value10=meta_field(value0,(reinterpret_cast<char *>(value1)+14));
 void *value11=fn_800365B4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value10)+56)=value11;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value10)+52)=1;
 void *value12=meta_field(value0,(reinterpret_cast<char *>(value1)+15));
 void *value13=fn_800365B4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value12)+56)=value13;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value12)+52)=1;
 void *value14=meta_field(value0,(reinterpret_cast<char *>(value1)+16));
 void *value15=beSaveDataDeliver_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value14)+56)=value15;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value14)+60)=0;
 void *value16=meta_field(value0,(reinterpret_cast<char *>(value1)+17));
 void *value17=beSvPlatBaseData_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value16)+56)=value17;
 meta_setupFields(value0,lbl_804CFEEC,lbl_804CFF34,lbl_804CFF7C,value1);
}
}
#pragma pop
