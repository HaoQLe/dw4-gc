#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beWaterPlainInfo_arkRegister();
extern void *beWaterPlainInfo_meta;
}
extern "C" {
void *beWaterPlainInfo_getMeta(){
 if(!beWaterPlainInfo_meta || !(reinterpret_cast<unsigned int *>(beWaterPlainInfo_meta)[0x24/4]&4)) beWaterPlainInfo_arkRegister();
 return beWaterPlainInfo_meta;
}
}
#pragma pop
