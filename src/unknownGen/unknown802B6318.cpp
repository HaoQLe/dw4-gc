#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029A5C();
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
extern char beTextureCtrlInfo_fieldTypes[];
extern char beTextureCtrlInfo_fieldNames[];
extern char beTextureCtrlInfo_fieldStorage[];
extern char beTextureCtrlInfo_fieldOffsets[];
extern void *beTextureCtrlInfo_meta;
}
extern "C" {
void beTextureCtrlInfo_fieldInit(){
 void *value0=beTextureCtrlInfo_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beTextureCtrlInfo_fieldTypes,2);
 void *value2=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value3=fn_80029A5C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 meta_setupFields(value0,beTextureCtrlInfo_fieldNames,beTextureCtrlInfo_fieldStorage,beTextureCtrlInfo_fieldOffsets,value1);
}
}
#pragma pop
