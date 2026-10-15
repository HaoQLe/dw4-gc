#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beFileListInfo_registerNow();
extern void *beFileListInfo_meta;
}
extern "C" {
void *beFileListInfo_getMeta(){
 if(!beFileListInfo_meta || !(reinterpret_cast<unsigned int *>(beFileListInfo_meta)[0x24/4]&4)) beFileListInfo_registerNow();
 return beFileListInfo_meta;
}
}
#pragma pop
