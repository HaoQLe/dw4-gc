#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80034D84();
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void fn_80071694(void *,int);
void *fn_80122100();
void *beGeneraterPlayerDataList_metaObject();
extern char lbl_804D1DC8[];
extern char lbl_804D1DF8[];
extern char lbl_804D1E28[];
extern char lbl_804D1E58[];
extern void *beGeneraterData_meta;
}
extern "C" {
void beGeneraterData_fieldInit(){
 void *value0=beGeneraterData_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804D1DC8,12);
 void *value2=meta_field(value0,(reinterpret_cast<char *>(value1)+2));
 void *value3=fn_80122100();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+3));
 void *value5=fn_80034D84();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+52)=1;
 void *value6=meta_field(value0,(reinterpret_cast<char *>(value1)+5));
 fn_80071694(value6,0);
 void *value7=meta_field(value0,(reinterpret_cast<char *>(value1)+10));
 fn_80071694(value7,0);
 void *value8=meta_field(value0,(reinterpret_cast<char *>(value1)+11));
 void *value9=beGeneraterPlayerDataList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value8)+56)=value9;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value8)+52)=1;
 meta_setupFields(value0,lbl_804D1DF8,lbl_804D1E28,lbl_804D1E58,value1);
}
}
#pragma pop
