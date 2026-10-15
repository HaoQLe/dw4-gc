#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWLoadIntf2ChrDataSel_arkRegister();
extern void *beNDMWLoadIntf2ChrDataSel_meta;
}
extern "C" {
void *beNDMWLoadIntf2ChrDataSel_getMeta(){
 if(!beNDMWLoadIntf2ChrDataSel_meta || !(reinterpret_cast<unsigned int *>(beNDMWLoadIntf2ChrDataSel_meta)[0x24/4]&4)) beNDMWLoadIntf2ChrDataSel_arkRegister();
 return beNDMWLoadIntf2ChrDataSel_meta;
}
}
#pragma pop
