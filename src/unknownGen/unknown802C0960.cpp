#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beResetNode_arkRegister();
extern void *beResetNode_meta;
}
extern "C" {
void *beResetNode_getMeta(){
 if(!beResetNode_meta || !(reinterpret_cast<unsigned int *>(beResetNode_meta)[0x24/4]&4)) beResetNode_arkRegister();
 return beResetNode_meta;
}
}
#pragma pop
