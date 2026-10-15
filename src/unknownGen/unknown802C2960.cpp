#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beOptInfo_registerNow();
extern void *beOptInfo_meta;
}
extern "C" {
void *beOptInfo_getMeta(){
 if(!beOptInfo_meta || !(reinterpret_cast<unsigned int *>(beOptInfo_meta)[0x24/4]&4)) beOptInfo_registerNow();
 return beOptInfo_meta;
}
}
#pragma pop
