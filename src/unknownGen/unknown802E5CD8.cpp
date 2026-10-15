#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beAction2InfoList_arkRegister();
extern void *beAction2InfoList_meta;
}
extern "C" {
void *beAction2InfoList_getMeta(){
 if(!beAction2InfoList_meta || !(reinterpret_cast<unsigned int *>(beAction2InfoList_meta)[0x24/4]&4)) beAction2InfoList_arkRegister();
 return beAction2InfoList_meta;
}
}
#pragma pop
