#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void libNdmwRuntimePlugin_registerNow();
extern void *libNdmwRuntimePlugin_meta;
}
extern "C" {
void *libNdmwRuntimePlugin_getMeta(){
 if(!libNdmwRuntimePlugin_meta || !(reinterpret_cast<unsigned int *>(libNdmwRuntimePlugin_meta)[0x24/4]&4)) libNdmwRuntimePlugin_registerNow();
 return libNdmwRuntimePlugin_meta;
}
}
#pragma pop
