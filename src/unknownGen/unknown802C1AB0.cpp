#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beParticleCtrl2Info_arkRegister();
extern void *beParticleCtrl2Info_meta;
}
extern "C" {
void *beParticleCtrl2Info_getMeta(){
 if(!beParticleCtrl2Info_meta || !(reinterpret_cast<unsigned int *>(beParticleCtrl2Info_meta)[0x24/4]&4)) beParticleCtrl2Info_arkRegister();
 return beParticleCtrl2Info_meta;
}
}
#pragma pop
