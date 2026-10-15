#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *beModelCtrlNode2_metaObject();
extern char beParticleCtrl2InfoWork_fieldTypes[];
extern char beParticleCtrl2InfoWork_fieldNames[];
extern char beParticleCtrl2InfoWork_fieldStorage[];
extern char beParticleCtrl2InfoWork_fieldOffsets[];
extern void *beParticleCtrl2InfoWork_meta;
}
extern "C" {
void beParticleCtrl2InfoWork_fieldInit(){
 void *value0=beParticleCtrl2InfoWork_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beParticleCtrl2InfoWork_fieldTypes,2);
 void *value2=meta_field(value0,value1);
 void *value3=beModelCtrlNode2_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 meta_setupFields(value0,beParticleCtrl2InfoWork_fieldNames,beParticleCtrl2InfoWork_fieldStorage,beParticleCtrl2InfoWork_fieldOffsets,value1);
}
}
#pragma pop
