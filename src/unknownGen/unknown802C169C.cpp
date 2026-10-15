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
extern char lbl_804D0068[];
extern char lbl_804D0074[];
extern char lbl_804D0080[];
extern char lbl_804D008C[];
extern void *beParticleCtrl2InfoRam_meta;
}
extern "C" {
void beParticleCtrl2InfoRam_fieldInit(){
 void *value0=beParticleCtrl2InfoRam_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804D0068,3);
 void *value2=meta_field(value0,value1);
 void *value3=fn_801AC644();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=ParticleTimer_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 void *value6=meta_field(value0,(reinterpret_cast<char *>(value1)+2));
 void *value7=beParticleCtrl2InfoWork_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 meta_setupFields(value0,lbl_804D0074,lbl_804D0080,lbl_804D008C,value1);
}
}
#pragma pop
