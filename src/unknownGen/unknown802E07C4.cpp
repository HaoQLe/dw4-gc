#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beCopyModelCtrl2_arkRegister();
void *fn_802F4EB8();
extern void *beCopyModelCtrl2_meta;
}
extern "C" {
void *fn_802E07C4(){return fn_802F4EB8();}
void *beCopyModelCtrl2_getMeta(){
 if(!beCopyModelCtrl2_meta || !(reinterpret_cast<unsigned int *>(beCopyModelCtrl2_meta)[0x24/4]&4)) beCopyModelCtrl2_arkRegister();
 return beCopyModelCtrl2_meta;
}
}
#pragma pop
