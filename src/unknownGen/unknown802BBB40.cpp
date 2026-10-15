#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *beSvDeliver_metaObject();
extern char beSaveUtilInfoRam_fieldTypes[];
extern char beSaveUtilInfoRam_fieldNames[];
extern char beSaveUtilInfoRam_fieldStorage[];
extern char beSaveUtilInfoRam_fieldOffsets[];
extern void *beSaveUtilInfoRam_meta;
}
extern "C" {
void beSaveUtilInfoRam_fieldInit(){
 void *value0=beSaveUtilInfoRam_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beSaveUtilInfoRam_fieldTypes,2);
 void *value2=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value3=beSvDeliver_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 meta_setupFields(value0,beSaveUtilInfoRam_fieldNames,beSaveUtilInfoRam_fieldStorage,beSaveUtilInfoRam_fieldOffsets,value1);
}
}
#pragma pop
