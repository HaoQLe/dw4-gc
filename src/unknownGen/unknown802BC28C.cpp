#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beSvPlatDataPC_arkRegister();
extern void *beSvPlatDataPC_meta;
}
extern "C" {
void *beSvPlatDataPC_getMeta(){
 if(!beSvPlatDataPC_meta || !(reinterpret_cast<unsigned int *>(beSvPlatDataPC_meta)[0x24/4]&4)) beSvPlatDataPC_arkRegister();
 return beSvPlatDataPC_meta;
}
}
#pragma pop
