#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800365B4();
void *fn_80036C40();
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *beMessenger_metaObject();
extern char lbl_804E2970[];
extern char lbl_804E2998[];
extern char lbl_804E29C0[];
extern char lbl_804E29E8[];
extern void *beNDMWMdlPEBaseInfoWork_meta;
}
extern "C" {
void beNDMWMdlPEBaseInfoWork_fieldInit(){
 void *value0=beNDMWMdlPEBaseInfoWork_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804E2970,10);
 void *value2=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value3=fn_800365B4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+2));
 void *value5=fn_800365B4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 void *value6=meta_field(value0,(reinterpret_cast<char *>(value1)+3));
 void *value7=fn_800365B4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 void *value8=meta_field(value0,(reinterpret_cast<char *>(value1)+4));
 void *value9=fn_80036C40();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value8)+56)=value9;
 void *value10=meta_field(value0,(reinterpret_cast<char *>(value1)+7));
 void *value11=fn_800365B4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value10)+56)=value11;
 void *value12=meta_field(value0,(reinterpret_cast<char *>(value1)+8));
 void *value13=fn_800365B4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value12)+56)=value13;
 void *value14=meta_field(value0,(reinterpret_cast<char *>(value1)+9));
 void *value15=beMessenger_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value14)+56)=value15;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value14)+60)=0;
 meta_setupFields(value0,lbl_804E2998,lbl_804E29C0,lbl_804E29E8,value1);
}
}
#pragma pop
