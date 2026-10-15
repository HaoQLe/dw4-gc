#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80034BB0();
void *fn_80034D84();
void *fn_800365B4();
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *fn_800D0068();
void *beWaterMove_metaObject();
extern char beWaterPlainInfoRam_fieldTypes[];
extern char beWaterPlainInfoRam_fieldNames[];
extern char beWaterPlainInfoRam_fieldStorage[];
extern char beWaterPlainInfoRam_fieldOffsets[];
extern void *beWaterPlainInfoRam_meta;
}
extern "C" {
void beWaterPlainInfoRam_fieldInit(){
 void *value0=beWaterPlainInfoRam_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beWaterPlainInfoRam_fieldTypes,27);
 void *value2=meta_field(value0,(reinterpret_cast<char *>(value1)+10));
 void *value3=fn_800D0068();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+11));
 void *value5=fn_80034D84();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+52)=1;
 void *value6=meta_field(value0,(reinterpret_cast<char *>(value1)+12));
 void *value7=fn_800365B4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value6)+52)=1;
 void *value8=meta_field(value0,(reinterpret_cast<char *>(value1)+21));
 void *value9=fn_80034BB0();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value8)+56)=value9;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value8)+52)=1;
 void *value10=meta_field(value0,(reinterpret_cast<char *>(value1)+26));
 void *value11=beWaterMove_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value10)+56)=value11;
 meta_setupFields(value0,beWaterPlainInfoRam_fieldNames,beWaterPlainInfoRam_fieldStorage,beWaterPlainInfoRam_fieldOffsets,value1);
}
}
#pragma pop
