#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *beDemoKeepMesList_metaObject();
extern char beDemoManagerWork_fieldTypes[];
extern char beDemoManagerWork_fieldNames[];
extern char beDemoManagerWork_fieldStorage[];
extern char beDemoManagerWork_fieldOffsets[];
extern void *beDemoManagerWork_meta;
}
extern "C" {
void beDemoManagerWork_fieldInit(){
 void *value0=beDemoManagerWork_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beDemoManagerWork_fieldTypes,2);
 void *value2=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value3=beDemoKeepMesList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 meta_setupFields(value0,beDemoManagerWork_fieldNames,beDemoManagerWork_fieldStorage,beDemoManagerWork_fieldOffsets,value1);
}
}
#pragma pop
