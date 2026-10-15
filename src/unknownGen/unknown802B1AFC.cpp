#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void libBecRuntimePlugin_arkRegister();
extern void *libBecRuntimePlugin_meta;
}
extern "C" {
void *libBecRuntimePlugin_getMeta(){
 if(!libBecRuntimePlugin_meta || !(reinterpret_cast<unsigned int *>(libBecRuntimePlugin_meta)[0x24/4]&4)) libBecRuntimePlugin_arkRegister();
 return libBecRuntimePlugin_meta;
}
}
#pragma pop
