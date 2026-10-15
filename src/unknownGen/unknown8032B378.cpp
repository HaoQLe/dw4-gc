#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800365B4();
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *beNDMWItemBaseList_metaObject();
extern char lbl_804E1A7C[];
extern char lbl_804E1A98[];
extern char lbl_804E1AB4[];
extern char lbl_804E1AD0[];
extern void *beNDMWStatusInfoWork_meta;
}
extern "C" {
void beNDMWStatusInfoWork_fieldInit(){
 void *value0=beNDMWStatusInfoWork_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804E1A7C,7);
 void *value2=meta_field(value0,value1);
 void *value3=fn_800365B4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_800365B4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+52)=1;
 void *value6=meta_field(value0,(reinterpret_cast<char *>(value1)+2));
 void *value7=beNDMWItemBaseList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value6)+52)=1;
 void *value8=meta_field(value0,(reinterpret_cast<char *>(value1)+3));
 void *value9=beNDMWItemBaseList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value8)+56)=value9;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value8)+52)=1;
 void *value10=meta_field(value0,(reinterpret_cast<char *>(value1)+4));
 void *value11=beNDMWItemBaseList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value10)+56)=value11;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value10)+52)=1;
 void *value12=meta_field(value0,(reinterpret_cast<char *>(value1)+5));
 void *value13=beNDMWItemBaseList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value12)+56)=value13;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value12)+52)=1;
 meta_setupFields(value0,lbl_804E1A98,lbl_804E1AB4,lbl_804E1AD0,value1);
}
}
#pragma pop
