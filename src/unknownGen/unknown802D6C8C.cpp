#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beGeneraterInfoRam_registerNow();
extern void *beGeneraterInfoRam_meta;
}
extern "C" {
void *beGeneraterInfoRam_getMeta(){
 if(!beGeneraterInfoRam_meta || !(reinterpret_cast<unsigned int *>(beGeneraterInfoRam_meta)[0x24/4]&4)) beGeneraterInfoRam_registerNow();
 return beGeneraterInfoRam_meta;
}
}
#pragma pop
