#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *fn_800C6F94();
void *fn_800CE788();
void igCriMovieData_arkRegister();
extern char igCriMovieCodec_fieldTypes[];
extern char igCriMovieCodec_fieldNames[];
extern char igCriMovieCodec_fieldStorage[];
extern char igCriMovieCodec_fieldOffsets[];
extern void *igCriMovieCodec_meta;
extern void *igCriMovieData_meta;
}
extern "C" {
void igCriMovieCodec_fieldInit(){
 void *value0=igCriMovieCodec_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,igCriMovieCodec_fieldTypes,3);
 void *value2=meta_field(value0,value1);
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+38)=0;
 void *value3=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value4=fn_800CE788();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value3)+56)=value4;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value3)+38)=0;
 void *value5=meta_field(value0,(reinterpret_cast<char *>(value1)+2));
 void *value6=fn_800C6F94();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value5)+56)=value6;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value5)+38)=0;
 meta_setupFields(value0,igCriMovieCodec_fieldNames,igCriMovieCodec_fieldStorage,igCriMovieCodec_fieldOffsets,value1);
}
void *igCriMovieData_create(void *object){
 igCriMovieData_arkRegister();
 return meta_createInstance(igCriMovieData_meta,object);
}
void *igCriMovieData_getMeta(){
 if(!igCriMovieData_meta || !(reinterpret_cast<unsigned int *>(igCriMovieData_meta)[0x24/4]&4)) igCriMovieData_arkRegister();
 return igCriMovieData_meta;
}
}
#pragma pop
