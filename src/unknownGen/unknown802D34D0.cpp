#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *beLayerGroupList_metaObject();
extern char lbl_804D190C[];
extern char lbl_804D1910[];
extern char lbl_804D1914[];
extern char lbl_804D1918[];
extern void *beLayerInfo_meta;
}
extern "C" {
void beLayerInfo_fieldInit(){
 void *value0=beLayerInfo_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804D190C,1);
 void *value2=meta_field(value0,value1);
 void *value3=beLayerGroupList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 meta_setupFields(value0,lbl_804D1910,lbl_804D1914,lbl_804D1918,value1);
}
}
#pragma pop
