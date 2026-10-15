#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029A5C();
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void fn_80071694(void *,int);
extern char beFileListInfo_fieldTypes[];
extern char beFileListInfo_fieldNames[];
extern char beFileListInfo_fieldStorage[];
extern char beFileListInfo_fieldOffsets[];
extern void *beFileListInfo_meta;
}
extern "C" {
void beFileListInfo_fieldInit(){
 void *value0=beFileListInfo_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beFileListInfo_fieldTypes,2);
 void *value2=meta_field(value0,value1);
 fn_80071694(value2,0);
 void *value3=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value4=fn_80029A5C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value3)+56)=value4;
 meta_setupFields(value0,beFileListInfo_fieldNames,beFileListInfo_fieldStorage,beFileListInfo_fieldOffsets,value1);
}
}
#pragma pop
