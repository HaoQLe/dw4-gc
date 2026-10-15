#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beActionStarterData2_arkRegister();
extern void *beActionStarterData2_meta;
}
extern "C" {
void *beActionStarterData2_getMeta(){
 if(!beActionStarterData2_meta || !(reinterpret_cast<unsigned int *>(beActionStarterData2_meta)[0x24/4]&4)) beActionStarterData2_arkRegister();
 return beActionStarterData2_meta;
}
}
#pragma pop
