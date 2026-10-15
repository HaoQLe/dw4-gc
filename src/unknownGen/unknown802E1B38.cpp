#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beCameraDemoData_registerNow();
extern void *beCameraDemoData_meta;
}
extern "C" {
void *beCameraDemoData_getMeta(){
 if(!beCameraDemoData_meta || !(reinterpret_cast<unsigned int *>(beCameraDemoData_meta)[0x24/4]&4)) beCameraDemoData_registerNow();
 return beCameraDemoData_meta;
}
}
#pragma pop
