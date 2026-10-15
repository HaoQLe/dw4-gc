#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beSvSlotGC_arkRegister();
extern void *beSvSlotGC_meta;
}
extern "C" {
void *beSvSlotGC_getMeta(){
 if(!beSvSlotGC_meta || !(reinterpret_cast<unsigned int *>(beSvSlotGC_meta)[0x24/4]&4)) beSvSlotGC_arkRegister();
 return beSvSlotGC_meta;
}
}
#pragma pop
