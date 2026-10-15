#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beCriFxInfo_registerNow();
extern void *beCriFxInfo_meta;
}
extern "C" {
void *beCriFxInfo_getMeta(){
 if(!beCriFxInfo_meta || !(reinterpret_cast<unsigned int *>(beCriFxInfo_meta)[0x24/4]&4)) beCriFxInfo_registerNow();
 return beCriFxInfo_meta;
}
}
#pragma pop
