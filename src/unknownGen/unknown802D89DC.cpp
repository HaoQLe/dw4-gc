#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beFontInfo_registerNow();
extern void *beFontInfo_meta;
}
extern "C" {
void *beFontInfo_getMeta(){
 if(!beFontInfo_meta || !(reinterpret_cast<unsigned int *>(beFontInfo_meta)[0x24/4]&4)) beFontInfo_registerNow();
 return beFontInfo_meta;
}
}
#pragma pop
