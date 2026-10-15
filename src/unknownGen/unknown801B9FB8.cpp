#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igMorphInstance_arkRegister();
extern void *igMorphInstance_meta;
}
extern "C" {
void *igMorphInstance_getMeta(){
 if(!igMorphInstance_meta || !(reinterpret_cast<unsigned int *>(igMorphInstance_meta)[0x24/4]&4)) igMorphInstance_arkRegister();
 return igMorphInstance_meta;
}
}
#pragma pop
