#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beChangePosTransformInfoRam_arkRegister();
void *fn_802F4C38();
extern void *beChangePosTransformInfoRam_meta;
}
extern "C" {
void *fn_802E0C48(){return fn_802F4C38();}
void *beChangePosTransformInfoRam_getMeta(){
 if(!beChangePosTransformInfoRam_meta || !(reinterpret_cast<unsigned int *>(beChangePosTransformInfoRam_meta)[0x24/4]&4)) beChangePosTransformInfoRam_arkRegister();
 return beChangePosTransformInfoRam_meta;
}
}
#pragma pop
