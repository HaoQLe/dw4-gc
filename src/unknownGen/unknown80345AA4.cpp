#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8002E824();
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *fn_80111CD4();
void *fn_80113DC0();
extern char lbl_804E41D8[];
extern char lbl_804E41E8[];
extern char lbl_804E41F8[];
extern char lbl_804E4208[];
extern void *beNDMWAfsSetup_meta;
}
extern "C" {
void beNDMWAfsSetup_fieldInit(){
 void *value0=beNDMWAfsSetup_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804E41D8,4);
 void *value2=meta_field(value0,value1);
 void *value3=fn_8002E824();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_80113DC0();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 void *value6=meta_field(value0,(reinterpret_cast<char *>(value1)+2));
 void *value7=fn_80113DC0();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 void *value8=meta_field(value0,(reinterpret_cast<char *>(value1)+3));
 void *value9=fn_80111CD4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value8)+56)=value9;
 meta_setupFields(value0,lbl_804E41E8,lbl_804E41F8,lbl_804E4208,value1);
}
}
#pragma pop
