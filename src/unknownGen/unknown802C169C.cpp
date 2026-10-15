#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *fn_801AC644();
void *beParticleCtrl2InfoWork_metaObject();
void *ParticleTimer_metaObject();
extern char beParticleCtrl2InfoRam_fieldTypes[];
extern char beParticleCtrl2InfoRam_fieldNames[];
extern char beParticleCtrl2InfoRam_fieldStorage[];
extern char beParticleCtrl2InfoRam_fieldOffsets[];
extern void *beParticleCtrl2InfoRam_meta;
}
extern "C" {
void beParticleCtrl2InfoRam_fieldInit(){
 void *value0=beParticleCtrl2InfoRam_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beParticleCtrl2InfoRam_fieldTypes,3);
 void *value2=meta_field(value0,value1);
 void *value3=fn_801AC644();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=ParticleTimer_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 void *value6=meta_field(value0,(reinterpret_cast<char *>(value1)+2));
 void *value7=beParticleCtrl2InfoWork_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 meta_setupFields(value0,beParticleCtrl2InfoRam_fieldNames,beParticleCtrl2InfoRam_fieldStorage,beParticleCtrl2InfoRam_fieldOffsets,value1);
}
}
#pragma pop
