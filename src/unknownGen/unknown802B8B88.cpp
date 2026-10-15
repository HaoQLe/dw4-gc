#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beSoundData_registerNow();
extern void *beSoundData_meta;
}
extern "C" {
void *beSoundData_getMeta(){
 if(!beSoundData_meta || !(reinterpret_cast<unsigned int *>(beSoundData_meta)[0x24/4]&4)) beSoundData_registerNow();
 return beSoundData_meta;
}
}
#pragma pop
