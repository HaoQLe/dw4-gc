#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *beTextureCtrlWork_metaObject();
extern char beTextureCtrl_fieldTypes[];
extern char beTextureCtrl_fieldNames[];
extern char beTextureCtrl_fieldStorage[];
extern char beTextureCtrl_fieldOffsets[];
extern void *beTextureCtrl_meta;
}
extern "C" {
void beTextureCtrl_fieldInit(){
 void *value0=beTextureCtrl_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beTextureCtrl_fieldTypes,2);
 void *value2=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value3=beTextureCtrlWork_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 meta_setupFields(value0,beTextureCtrl_fieldNames,beTextureCtrl_fieldStorage,beTextureCtrl_fieldOffsets,value1);
}
}
#pragma pop
