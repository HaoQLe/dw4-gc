#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beSaveUtilInfo_arkRegister();
extern void *beSaveUtilInfo_meta;
}
extern "C" {
void *beSaveUtilInfo_getMeta(){
 if(!beSaveUtilInfo_meta || !(reinterpret_cast<unsigned int *>(beSaveUtilInfo_meta)[0x24/4]&4)) beSaveUtilInfo_arkRegister();
 return beSaveUtilInfo_meta;
}
}
#pragma pop
