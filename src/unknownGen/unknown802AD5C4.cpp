#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *fn_800C6F94();
void *fn_8010DFFC();
void *igMovieCodecList_metaObject();
void *igMovieInfoList_metaObject();
void *igMovieRenderer_metaObject();
extern char igMovieManager_fieldTypes[];
extern char igMovieManager_fieldNames[];
extern char igMovieManager_fieldStorage[];
extern char igMovieManager_fieldOffsets[];
extern void *igMovieManager_meta;
}
extern "C" {
void igMovieManager_fieldInit(){
 void *value0=igMovieManager_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,igMovieManager_fieldTypes,6);
 void *value2=meta_field(value0,value1);
 void *value3=igMovieInfoList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+38)=0;
 void *value5=meta_field(value0,(reinterpret_cast<char *>(value1)+2));
 void *value6=fn_800C6F94();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value5)+56)=value6;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value5)+38)=0;
 void *value7=meta_field(value0,(reinterpret_cast<char *>(value1)+3));
 void *value8=igMovieCodecList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value7)+56)=value8;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value7)+38)=0;
 void *value9=meta_field(value0,(reinterpret_cast<char *>(value1)+4));
 void *value10=igMovieRenderer_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value9)+56)=value10;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value9)+52)=1;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value9)+38)=0;
 void *value11=meta_field(value0,(reinterpret_cast<char *>(value1)+5));
 void *value12=fn_8010DFFC();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value11)+56)=value12;
 meta_setupFields(value0,igMovieManager_fieldNames,igMovieManager_fieldStorage,igMovieManager_fieldOffsets,value1);
}
}
#pragma pop
