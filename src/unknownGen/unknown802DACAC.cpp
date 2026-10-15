#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beFile_arkRegister();
extern void *beFile_meta;
}
extern "C" {
void *beFile_getMeta(){
 if(!beFile_meta || !(reinterpret_cast<unsigned int *>(beFile_meta)[0x24/4]&4)) beFile_arkRegister();
 return beFile_meta;
}
}
#pragma pop
