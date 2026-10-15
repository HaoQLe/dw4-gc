#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8004D4BC(void *,float);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *beMeterCtrlNode_metaObject();
void *beDataObjInt_metaObject();
extern char lbl_8041E6AC[];
extern char beMeterCtrlOneData_fieldTypes[];
extern char beMeterCtrlOneData_fieldNames[];
extern char beMeterCtrlOneData_fieldStorage[];
extern char beMeterCtrlOneData_fieldOffsets[];
extern void *beMeterCtrlOneData_meta;
}
extern "C" {
void beMeterCtrlOneData_fieldInit(){
 void *value0=beMeterCtrlOneData_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beMeterCtrlOneData_fieldTypes,14);
 void *value2=meta_field(value0,value1);
 void *value3=beMeterCtrlNode_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+4));
 fn_8004D4BC(value4,*reinterpret_cast<float *>((lbl_8041E6AC+0)));
 void *value5=meta_field(value0,(reinterpret_cast<char *>(value1)+5));
 fn_8004D4BC(value5,*reinterpret_cast<float *>((lbl_8041E6AC+0)));
 void *value6=meta_field(value0,(reinterpret_cast<char *>(value1)+12));
 void *value7=beDataObjInt_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 void *value8=meta_field(value0,(reinterpret_cast<char *>(value1)+13));
 void *value9=beDataObjInt_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value8)+56)=value9;
 meta_setupFields(value0,beMeterCtrlOneData_fieldNames,beMeterCtrlOneData_fieldStorage,beMeterCtrlOneData_fieldOffsets,value1);
}
}
#pragma pop
