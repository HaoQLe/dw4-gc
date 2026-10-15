#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *fn_801ADB98();
extern char beParticleCtrl2Info_fieldTypes[];
extern char beParticleCtrl2Info_fieldNames[];
extern char beParticleCtrl2Info_fieldStorage[];
extern char beParticleCtrl2Info_fieldOffsets[];
extern void *beParticleCtrl2Info_meta;
}
extern "C" {
void beParticleCtrl2Info_fieldInit(){
 void *value0=beParticleCtrl2Info_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beParticleCtrl2Info_fieldTypes,4);
 void *value2=meta_field(value0,value1);
 void *value3=fn_801ADB98();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_801ADB98();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 meta_setupFields(value0,beParticleCtrl2Info_fieldNames,beParticleCtrl2Info_fieldStorage,beParticleCtrl2Info_fieldOffsets,value1);
}
}
#pragma pop
