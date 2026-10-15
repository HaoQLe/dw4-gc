#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *beCriVolume_metaObject();
void *beCriAudio_metaObject();
extern char lbl_804D267C[];
extern char lbl_804D2690[];
extern char lbl_804D26A4[];
extern char lbl_804D26B8[];
extern void *beCriHandle_meta;
}
extern "C" {
void beCriHandle_fieldInit(){
 void *value0=beCriHandle_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804D267C,5);
 void *value2=meta_field(value0,value1);
 void *value3=beCriAudio_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=beCriVolume_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+52)=1;
 meta_setupFields(value0,lbl_804D2690,lbl_804D26A4,lbl_804D26B8,value1);
}
}
#pragma pop
