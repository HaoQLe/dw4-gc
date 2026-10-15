#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80028F84();
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
extern char beNDMWLoadCtrl2Info_fieldTypes[];
extern char beNDMWLoadCtrl2Info_fieldNames[];
extern char beNDMWLoadCtrl2Info_fieldStorage[];
extern char beNDMWLoadCtrl2Info_fieldOffsets[];
extern void *beNDMWLoadCtrl2Info_meta;
}
extern "C" {
void beNDMWLoadCtrl2Info_fieldInit(){
 void *value0=beNDMWLoadCtrl2Info_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beNDMWLoadCtrl2Info_fieldTypes,1);
 void *value2=meta_field(value0,value1);
 void *value3=fn_80028F84();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 meta_setupFields(value0,beNDMWLoadCtrl2Info_fieldNames,beNDMWLoadCtrl2Info_fieldStorage,beNDMWLoadCtrl2Info_fieldOffsets,value1);
}
}
#pragma pop
