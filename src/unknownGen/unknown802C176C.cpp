#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void beParticleCtrl2InfoWork_arkRegister();
extern void *beParticleCtrl2InfoWork_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *beParticleCtrl2InfoWork_create(void *object){
 beParticleCtrl2InfoWork_arkRegister();
 return meta_createInstance(beParticleCtrl2InfoWork_meta,object);
}
void *beParticleCtrl2InfoWork_metaObject(){
 if(!beParticleCtrl2InfoWork_meta) beParticleCtrl2InfoWork_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beParticleCtrl2InfoWork_meta;
}
void *beParticleCtrl2InfoWork_getMeta(){
 if(!beParticleCtrl2InfoWork_meta || !(reinterpret_cast<unsigned int *>(beParticleCtrl2InfoWork_meta)[0x24/4]&4)) beParticleCtrl2InfoWork_arkRegister();
 return beParticleCtrl2InfoWork_meta;
}
}
#pragma pop
