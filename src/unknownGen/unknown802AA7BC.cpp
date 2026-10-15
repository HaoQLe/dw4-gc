#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igAdx_registerNow();
extern void *igAdx_meta;
}
extern "C" {
void *igAdx_getMeta(){
 if(!igAdx_meta || !(reinterpret_cast<unsigned int *>(igAdx_meta)[0x24/4]&4)) igAdx_registerNow();
 return igAdx_meta;
}
}
#pragma pop
