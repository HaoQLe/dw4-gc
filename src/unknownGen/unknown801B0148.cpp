#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igSimpleUserInfo_registerNow();
extern void *igSimpleUserInfo_meta;
}
extern "C" {
void *igSimpleUserInfo_getMeta(){
 if(!igSimpleUserInfo_meta || !(reinterpret_cast<unsigned int *>(igSimpleUserInfo_meta)[0x24/4]&4)) igSimpleUserInfo_registerNow();
 return igSimpleUserInfo_meta;
}
}
#pragma pop
