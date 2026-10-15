#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80035F2C();
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
extern char beMeterCtrlNode_fieldTypes[];
extern char beMeterCtrlNode_fieldNames[];
extern char beMeterCtrlNode_fieldStorage[];
extern char beMeterCtrlNode_fieldOffsets[];
extern void *beMeterCtrlNode_meta;
}
extern "C" {
void beMeterCtrlNode_fieldInit(){
 void *value0=beMeterCtrlNode_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beMeterCtrlNode_fieldTypes,3);
 void *value2=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value3=fn_80035F2C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 meta_setupFields(value0,beMeterCtrlNode_fieldNames,beMeterCtrlNode_fieldStorage,beMeterCtrlNode_fieldOffsets,value1);
}
}
#pragma pop
