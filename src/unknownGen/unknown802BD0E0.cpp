#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beSvPlatDataGC_arkRegister();
extern void *beSvPlatDataGC_meta;
}
extern "C" {
void *beSvPlatDataGC_getMeta(){
 if(!beSvPlatDataGC_meta || !(reinterpret_cast<unsigned int *>(beSvPlatDataGC_meta)[0x24/4]&4)) beSvPlatDataGC_arkRegister();
 return beSvPlatDataGC_meta;
}
}
#pragma pop
