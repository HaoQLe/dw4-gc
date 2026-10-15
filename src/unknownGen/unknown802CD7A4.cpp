#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029A5C();
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
extern char beMeterCtrlInfo_fieldTypes[];
extern char beMeterCtrlInfo_fieldNames[];
extern char beMeterCtrlInfo_fieldStorage[];
extern char beMeterCtrlInfo_fieldOffsets[];
extern void *beMeterCtrlInfo_meta;
}
extern "C" {
void beMeterCtrlInfo_fieldInit(){
 void *value0=beMeterCtrlInfo_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beMeterCtrlInfo_fieldTypes,1);
 void *value2=meta_field(value0,value1);
 void *value3=fn_80029A5C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 meta_setupFields(value0,beMeterCtrlInfo_fieldNames,beMeterCtrlInfo_fieldStorage,beMeterCtrlInfo_fieldOffsets,value1);
}
}
#pragma pop
