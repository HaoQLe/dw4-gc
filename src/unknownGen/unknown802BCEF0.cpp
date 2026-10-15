#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beSvPs2McImage128k_registerNow();
extern void *beSvPs2McImage128k_meta;
}
extern "C" {
void *beSvPs2McImage128k_getMeta(){
 if(!beSvPs2McImage128k_meta || !(reinterpret_cast<unsigned int *>(beSvPs2McImage128k_meta)[0x24/4]&4)) beSvPs2McImage128k_registerNow();
 return beSvPs2McImage128k_meta;
}
}
#pragma pop
