#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void libNdmwRuntimePlugin_arkRegister();
extern void *libNdmwRuntimePlugin_meta;
}
extern "C" {
void *libNdmwRuntimePlugin_getMeta(){
 if(!libNdmwRuntimePlugin_meta || !(reinterpret_cast<unsigned int *>(libNdmwRuntimePlugin_meta)[0x24/4]&4)) libNdmwRuntimePlugin_arkRegister();
 return libNdmwRuntimePlugin_meta;
}
}
#pragma pop
