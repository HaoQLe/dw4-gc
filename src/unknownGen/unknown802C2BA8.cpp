#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void fn_80071694(void *,int);
extern char beOptInfo_fieldTypes[];
extern char beOptInfo_fieldNames[];
extern char beOptInfo_fieldStorage[];
extern char beOptInfo_fieldOffsets[];
extern void *beOptInfo_meta;
}
extern "C" {
void beOptInfo_fieldInit(){
 void *value0=beOptInfo_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beOptInfo_fieldTypes,4);
 void *value2=meta_field(value0,(reinterpret_cast<char *>(value1)+2));
 fn_80071694(value2,0);
 void *value3=meta_field(value0,(reinterpret_cast<char *>(value1)+3));
 fn_80071694(value3,0);
 meta_setupFields(value0,beOptInfo_fieldNames,beOptInfo_fieldStorage,beOptInfo_fieldOffsets,value1);
}
}
#pragma pop
