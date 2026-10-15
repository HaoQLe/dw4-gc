#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igAdx_arkRegister();
extern void *igAdx_meta;
}
extern "C" {
void *igAdx_getMeta(){
 if(!igAdx_meta || !(reinterpret_cast<unsigned int *>(igAdx_meta)[0x24/4]&4)) igAdx_arkRegister();
 return igAdx_meta;
}
}
#pragma pop
