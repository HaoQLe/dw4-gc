#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *fn_801ADB98();
extern char beLayerCtl_fieldTypes[];
extern char beLayerCtl_fieldNames[];
extern char beLayerCtl_fieldStorage[];
extern char beLayerCtl_fieldOffsets[];
extern void *beLayerCtl_meta;
}
extern "C" {
void beLayerCtl_fieldInit(){
 void *value0=beLayerCtl_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beLayerCtl_fieldTypes,2);
 void *value2=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value3=fn_801ADB98();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 meta_setupFields(value0,beLayerCtl_fieldNames,beLayerCtl_fieldStorage,beLayerCtl_fieldOffsets,value1);
}
}
#pragma pop
