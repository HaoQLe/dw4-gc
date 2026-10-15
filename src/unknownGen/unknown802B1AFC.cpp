#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void libBecRuntimePlugin_registerNow();
extern void *libBecRuntimePlugin_meta;
}
extern "C" {
void *libBecRuntimePlugin_getMeta(){
 if(!libBecRuntimePlugin_meta || !(reinterpret_cast<unsigned int *>(libBecRuntimePlugin_meta)[0x24/4]&4)) libBecRuntimePlugin_registerNow();
 return libBecRuntimePlugin_meta;
}
}
#pragma pop
