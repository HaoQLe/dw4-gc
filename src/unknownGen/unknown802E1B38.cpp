#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beCameraDemoData_arkRegister();
extern void *beCameraDemoData_meta;
}
extern "C" {
void *beCameraDemoData_getMeta(){
 if(!beCameraDemoData_meta || !(reinterpret_cast<unsigned int *>(beCameraDemoData_meta)[0x24/4]&4)) beCameraDemoData_arkRegister();
 return beCameraDemoData_meta;
}
}
#pragma pop
