#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beSvPlatDataXbox_registerNow();
extern void *beSvPlatDataXbox_meta;
}
extern "C" {
void *beSvPlatDataXbox_getMeta(){
 if(!beSvPlatDataXbox_meta || !(reinterpret_cast<unsigned int *>(beSvPlatDataXbox_meta)[0x24/4]&4)) beSvPlatDataXbox_registerNow();
 return beSvPlatDataXbox_meta;
}
}
#pragma pop
