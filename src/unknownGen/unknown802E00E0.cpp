#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80028F84();
void *fn_8002E824();
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *beSystem_metaObject();
void *beCriHandleList_metaObject();
void *beCriHandle_metaObject();
extern char lbl_804D2868[];
extern char lbl_804D2898[];
extern char lbl_804D28C8[];
extern char lbl_804D28F8[];
extern void *beCri_meta;
}
extern "C" {
void beCri_fieldInit(){
 void *value0=beCri_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804D2868,12);
 void *value2=meta_field(value0,value1);
 void *value3=beSystem_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+60)=0;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+3));
 void *value5=beCriHandle_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 void *value6=meta_field(value0,(reinterpret_cast<char *>(value1)+4));
 void *value7=beCriHandle_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 void *value8=meta_field(value0,(reinterpret_cast<char *>(value1)+5));
 void *value9=beCriHandleList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value8)+56)=value9;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value8)+52)=1;
 void *value10=meta_field(value0,(reinterpret_cast<char *>(value1)+6));
 void *value11=fn_8002E824();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value10)+56)=value11;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value10)+52)=1;
 void *value12=meta_field(value0,(reinterpret_cast<char *>(value1)+7));
 void *value13=fn_80028F84();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value12)+56)=value13;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value12)+52)=1;
 meta_setupFields(value0,lbl_804D2898,lbl_804D28C8,lbl_804D28F8,value1);
}
}
#pragma pop
