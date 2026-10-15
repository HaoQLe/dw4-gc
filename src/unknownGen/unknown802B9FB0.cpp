#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beSelectCtrlInfo_arkRegister();
extern void *beSelectCtrlInfo_meta;
}
extern "C" {
void *beSelectCtrlInfo_getMeta(){
 if(!beSelectCtrlInfo_meta || !(reinterpret_cast<unsigned int *>(beSelectCtrlInfo_meta)[0x24/4]&4)) beSelectCtrlInfo_arkRegister();
 return beSelectCtrlInfo_meta;
}
}
#pragma pop
