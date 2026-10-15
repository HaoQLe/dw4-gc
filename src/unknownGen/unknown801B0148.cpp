#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igSimpleUserInfo_arkRegister();
extern void *igSimpleUserInfo_meta;
}
extern "C" {
void *igSimpleUserInfo_getMeta(){
 if(!igSimpleUserInfo_meta || !(reinterpret_cast<unsigned int *>(igSimpleUserInfo_meta)[0x24/4]&4)) igSimpleUserInfo_arkRegister();
 return igSimpleUserInfo_meta;
}
}
#pragma pop
