#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void fn_8003EC68(void *,int);
void fn_8004D4BC(void *,float);
void *fn_800607F4(void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *fn_800D0068();
void ParticleTimer_arkRegister();
extern char lbl_8041D5B0[];
extern char lbl_8041E6AC[];
extern char ParticleArray_fieldTypes[];
extern char ParticleArray_fieldNames[];
extern char ParticleArray_fieldStorage[];
extern char ParticleArray_fieldOffsets[];
extern void *ParticleArray_meta;
extern void *ParticleTimer_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *ParticleTimer_metaObject(){
 if(!ParticleTimer_meta) ParticleTimer_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return ParticleTimer_meta;
}
void *ParticleTimer_getMeta(){
 if(!ParticleTimer_meta || !(reinterpret_cast<unsigned int *>(ParticleTimer_meta)[0x24/4]&4)) ParticleTimer_arkRegister();
 return ParticleTimer_meta;
}
}
#pragma pop
