#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beLuaDataObjectist_registerNow();
extern void *beLuaDataObjectist_meta;
}
extern "C" {
void *beLuaDataObjectist_getMeta(){
 if(!beLuaDataObjectist_meta || !(reinterpret_cast<unsigned int *>(beLuaDataObjectist_meta)[0x24/4]&4)) beLuaDataObjectist_registerNow();
 return beLuaDataObjectist_meta;
}
}
#pragma pop
