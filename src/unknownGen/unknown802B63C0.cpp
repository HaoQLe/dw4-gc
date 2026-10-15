#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beTextureCtrlAttr_arkRegister();
extern void *beTextureCtrlAttr_meta;
}
extern "C" {
void *beTextureCtrlAttr_getMeta(){
 if(!beTextureCtrlAttr_meta || !(reinterpret_cast<unsigned int *>(beTextureCtrlAttr_meta)[0x24/4]&4)) beTextureCtrlAttr_arkRegister();
 return beTextureCtrlAttr_meta;
}
}
#pragma pop
