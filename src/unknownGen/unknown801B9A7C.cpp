#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igMorphInstance2_arkRegister();
extern void *igMorphInstance2_meta;
}
extern "C" {
void *igMorphInstance2_getMeta(){
 if(!igMorphInstance2_meta || !(reinterpret_cast<unsigned int *>(igMorphInstance2_meta)[0x24/4]&4)) igMorphInstance2_arkRegister();
 return igMorphInstance2_meta;
}
}
#pragma pop
