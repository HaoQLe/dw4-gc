#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beGeneraterInfo_arkRegister();
extern void *beGeneraterInfo_meta;
}
extern "C" {
void *beGeneraterInfo_getMeta(){
 if(!beGeneraterInfo_meta || !(reinterpret_cast<unsigned int *>(beGeneraterInfo_meta)[0x24/4]&4)) beGeneraterInfo_arkRegister();
 return beGeneraterInfo_meta;
}
}
#pragma pop
