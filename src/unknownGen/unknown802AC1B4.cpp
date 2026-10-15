#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
extern char igCriMovieData_fieldTypes[];
extern char igCriMovieData_fieldNames[];
extern char igCriMovieData_fieldStorage[];
extern char igCriMovieData_fieldOffsets[];
extern void *igCriMovieData_meta;
}
extern "C" {
void igCriMovieData_fieldInit(){
 void *value0=igCriMovieData_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,igCriMovieData_fieldTypes,5);
 void *value2=meta_field(value0,value1);
 *reinterpret_cast<short *>(reinterpret_cast<char *>(value2)+20)=4;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+38)=0;
 void *value3=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value3)+38)=0;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+2));
 *reinterpret_cast<short *>(reinterpret_cast<char *>(value4)+20)=4;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+38)=0;
 void *value5=meta_field(value0,(reinterpret_cast<char *>(value1)+3));
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value5)+38)=0;
 void *value6=meta_field(value0,(reinterpret_cast<char *>(value1)+4));
 *reinterpret_cast<short *>(reinterpret_cast<char *>(value6)+20)=4;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value6)+38)=0;
 meta_setupFields(value0,igCriMovieData_fieldNames,igCriMovieData_fieldStorage,igCriMovieData_fieldOffsets,value1);
}
}
#pragma pop
