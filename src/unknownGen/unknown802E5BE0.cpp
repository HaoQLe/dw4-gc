#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *fn_801C8D74();
void *fn_801CDCF8();
void *beModelCtrlNode2_metaObject();
void *beAction2InfoWork_metaObject();
extern char beAction2InfoRam_fieldTypes[];
extern char beAction2InfoRam_fieldNames[];
extern char beAction2InfoRam_fieldStorage[];
extern char beAction2InfoRam_fieldOffsets[];
extern void *beAction2InfoRam_meta;
}
extern "C" {
void beAction2InfoRam_fieldInit(){
 void *value0=beAction2InfoRam_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beAction2InfoRam_fieldTypes,4);
 void *value2=meta_field(value0,value1);
 void *value3=beModelCtrlNode2_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_801C8D74();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+52)=1;
 void *value6=meta_field(value0,(reinterpret_cast<char *>(value1)+2));
 void *value7=fn_801CDCF8();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value6)+52)=1;
 void *value8=meta_field(value0,(reinterpret_cast<char *>(value1)+3));
 void *value9=beAction2InfoWork_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value8)+56)=value9;
 meta_setupFields(value0,beAction2InfoRam_fieldNames,beAction2InfoRam_fieldStorage,beAction2InfoRam_fieldOffsets,value1);
}
}
#pragma pop
