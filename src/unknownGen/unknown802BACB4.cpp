#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beSeInfo_registerNow();
extern void *beSeInfo_meta;
}
extern "C" {
void *beSeInfo_getMeta(){
 if(!beSeInfo_meta || !(reinterpret_cast<unsigned int *>(beSeInfo_meta)[0x24/4]&4)) beSeInfo_registerNow();
 return beSeInfo_meta;
}
}
#pragma pop
