#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80053650(void *,int);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *beNDMWItemBase_metaObject();
extern char lbl_804E2A44[];
extern char lbl_804E2A64[];
extern char lbl_804E2A84[];
extern char lbl_804E2AA4[];
extern void *beNDMWMdlItemInfoWork_meta;
}
extern "C" {
void beNDMWMdlItemInfoWork_fieldInit(){
 void *value0=beNDMWMdlItemInfoWork_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804E2A44,8);
 void *value2=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value3=beNDMWItemBase_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+4));
 fn_80053650(value4,-1);
 meta_setupFields(value0,lbl_804E2A64,lbl_804E2A84,lbl_804E2AA4,value1);
}
}
#pragma pop
