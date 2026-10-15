#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beAction2FLASHSET_registerNow();
extern void *beAction2FLASHSET_meta;
}
extern "C" {
void *beAction2FLASHSET_getMeta(){
 if(!beAction2FLASHSET_meta || !(reinterpret_cast<unsigned int *>(beAction2FLASHSET_meta)[0x24/4]&4)) beAction2FLASHSET_registerNow();
 return beAction2FLASHSET_meta;
}
}
#pragma pop
