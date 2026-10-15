#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beSvPlatDataPS2_registerNow();
extern void *beSvPlatDataPS2_meta;
}
extern "C" {
void *beSvPlatDataPS2_getMeta(){
 if(!beSvPlatDataPS2_meta || !(reinterpret_cast<unsigned int *>(beSvPlatDataPS2_meta)[0x24/4]&4)) beSvPlatDataPS2_registerNow();
 return beSvPlatDataPS2_meta;
}
}
#pragma pop
