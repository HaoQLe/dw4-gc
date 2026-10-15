#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWLoadIntf2Info_arkRegister();
extern void *beNDMWLoadIntf2Info_meta;
}
extern "C" {
void *beNDMWLoadIntf2Info_getMeta(){
 if(!beNDMWLoadIntf2Info_meta || !(reinterpret_cast<unsigned int *>(beNDMWLoadIntf2Info_meta)[0x24/4]&4)) beNDMWLoadIntf2Info_arkRegister();
 return beNDMWLoadIntf2Info_meta;
}
}
#pragma pop
