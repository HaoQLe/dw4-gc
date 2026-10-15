#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8003EC68(void *,int);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *bePadManager_metaObject();
extern char beSelectCtrl_fieldTypes[];
extern char beSelectCtrl_fieldNames[];
extern char beSelectCtrl_fieldStorage[];
extern char beSelectCtrl_fieldOffsets[];
extern void *beSelectCtrl_meta;
}
extern "C" {
void beSelectCtrl_fieldInit(){
 void *value0=beSelectCtrl_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beSelectCtrl_fieldTypes,2);
 void *value2=meta_field(value0,value1);
 void *value3=bePadManager_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+60)=0;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 fn_8003EC68(value4,1);
 meta_setupFields(value0,beSelectCtrl_fieldNames,beSelectCtrl_fieldStorage,beSelectCtrl_fieldOffsets,value1);
}
}
#pragma pop
