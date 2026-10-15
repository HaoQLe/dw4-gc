#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beDBManagerInfo_arkRegister();
extern void *beDBManagerInfo_meta;
}
extern "C" {
void *beDBManagerInfo_getMeta(){
 if(!beDBManagerInfo_meta || !(reinterpret_cast<unsigned int *>(beDBManagerInfo_meta)[0x24/4]&4)) beDBManagerInfo_arkRegister();
 return beDBManagerInfo_meta;
}
}
#pragma pop
