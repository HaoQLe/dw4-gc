#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beAction2InfoRam_registerNow();
extern void *beAction2InfoRam_meta;
}
extern "C" {
void *beAction2InfoRam_getMeta(){
 if(!beAction2InfoRam_meta || !(reinterpret_cast<unsigned int *>(beAction2InfoRam_meta)[0x24/4]&4)) beAction2InfoRam_registerNow();
 return beAction2InfoRam_meta;
}
}
#pragma pop
