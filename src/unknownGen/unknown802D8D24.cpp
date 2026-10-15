#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beFontInfoData_arkRegister();
extern void *beFontInfoData_meta;
}
extern "C" {
void *beFontInfoData_getMeta(){
 if(!beFontInfoData_meta || !(reinterpret_cast<unsigned int *>(beFontInfoData_meta)[0x24/4]&4)) beFontInfoData_arkRegister();
 return beFontInfoData_meta;
}
}
#pragma pop
