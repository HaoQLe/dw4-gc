#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *igMovieManager_metaObject();
extern char igMoviePlugin_fieldTypes[];
extern char igMoviePlugin_fieldNames[];
extern char igMoviePlugin_fieldStorage[];
extern char igMoviePlugin_fieldOffsets[];
extern void *igMoviePlugin_meta;
}
extern "C" {
void igMoviePlugin_fieldInit(){
 void *value0=igMoviePlugin_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,igMoviePlugin_fieldTypes,1);
 void *value2=meta_field(value0,value1);
 void *value3=igMovieManager_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 meta_setupFields(value0,igMoviePlugin_fieldNames,igMoviePlugin_fieldStorage,igMoviePlugin_fieldOffsets,value1);
}
}
#pragma pop
