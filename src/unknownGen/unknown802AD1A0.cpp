#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *igMovieManager_metaObject();
extern char igMovieRenderer_fieldTypes[];
extern char igMovieRenderer_fieldNames[];
extern char igMovieRenderer_fieldStorage[];
extern char igMovieRenderer_fieldOffsets[];
extern void *igMovieRenderer_meta;
}
extern "C" {
void igMovieRenderer_fieldInit(){
 void *value0=igMovieRenderer_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,igMovieRenderer_fieldTypes,1);
 void *value2=meta_field(value0,value1);
 void *value3=igMovieManager_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+38)=0;
 meta_setupFields(value0,igMovieRenderer_fieldNames,igMovieRenderer_fieldStorage,igMovieRenderer_fieldOffsets,value1);
}
}
#pragma pop
