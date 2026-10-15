#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void beParticleCtrl2_arkRegister();
extern char lbl_8041CD10[];
extern char lbl_804D0108[];
extern char lbl_804D0128[];
extern void *lbl_80534AA4;
extern void *beParticleCtrl2_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802C1E30(){
 if(!lbl_80534AA4) lbl_80534AA4=fn_800635C8(lbl_8041CD10,lbl_804D0108,lbl_804D0128,0x8);
 return lbl_80534AA4;
}
void *beParticleCtrl2_create(void *object){
 beParticleCtrl2_arkRegister();
 return meta_createInstance(beParticleCtrl2_meta,object);
}
void *beParticleCtrl2_metaObject(){
 if(!beParticleCtrl2_meta) beParticleCtrl2_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beParticleCtrl2_meta;
}
void *beParticleCtrl2_getMeta(){
 if(!beParticleCtrl2_meta || !(reinterpret_cast<unsigned int *>(beParticleCtrl2_meta)[0x24/4]&4)) beParticleCtrl2_arkRegister();
 return beParticleCtrl2_meta;
}
}
#pragma pop
