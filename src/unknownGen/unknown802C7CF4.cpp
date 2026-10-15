#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *beModelCtrlNode2_metaObject();
extern char beModelCtrlInfoRideOn_fieldTypes[];
extern char beModelCtrlInfoRideOn_fieldNames[];
extern char beModelCtrlInfoRideOn_fieldStorage[];
extern char beModelCtrlInfoRideOn_fieldOffsets[];
extern void *beModelCtrlInfoRideOn_meta;
}
extern "C" {
void beModelCtrlInfoRideOn_fieldInit(){
 void *value0=beModelCtrlInfoRideOn_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beModelCtrlInfoRideOn_fieldTypes,4);
 void *value2=meta_field(value0,(reinterpret_cast<char *>(value1)+2));
 void *value3=beModelCtrlNode2_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 meta_setupFields(value0,beModelCtrlInfoRideOn_fieldNames,beModelCtrlInfoRideOn_fieldStorage,beModelCtrlInfoRideOn_fieldOffsets,value1);
}
}
#pragma pop
