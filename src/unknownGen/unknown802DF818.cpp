#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *igAdxAudio_metaObject();
void *beCriSndf_metaObject();
extern char lbl_804D27E0[];
extern char lbl_804D27F0[];
extern char lbl_804D2800[];
extern char lbl_804D2810[];
extern void *beCriAudio_meta;
}
extern "C" {
void beCriAudio_fieldInit(){
 void *value0=beCriAudio_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804D27E0,4);
 void *value2=meta_field(value0,value1);
 void *value3=igAdxAudio_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=beCriSndf_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 meta_setupFields(value0,lbl_804D27F0,lbl_804D2800,lbl_804D2810,value1);
}
}
#pragma pop
