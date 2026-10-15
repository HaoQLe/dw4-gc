#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *beLuaDataObject_metaObject();
extern char lbl_804D1850[];
extern char lbl_804D1854[];
extern char lbl_804D1858[];
extern char lbl_804D185C[];
extern void *beLuaData_meta;
}
extern "C" {
void beLuaData_fieldInit(){
 void *value0=beLuaData_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804D1850,1);
 void *value2=meta_field(value0,value1);
 void *value3=beLuaDataObject_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 meta_setupFields(value0,lbl_804D1854,lbl_804D1858,lbl_804D185C,value1);
}
}
#pragma pop
