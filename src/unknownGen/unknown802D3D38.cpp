#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beLOA_arkRegister();
extern void *beLOA_meta;
}
extern "C" {
void *beLOA_getMeta(){
 if(!beLOA_meta || !(reinterpret_cast<unsigned int *>(beLOA_meta)[0x24/4]&4)) beLOA_arkRegister();
 return beLOA_meta;
}
}
#pragma pop
