#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWLoadCtrl2Info_arkRegister();
extern void *beNDMWLoadCtrl2Info_meta;
}
extern "C" {
void *beNDMWLoadCtrl2Info_getMeta(){
 if(!beNDMWLoadCtrl2Info_meta || !(reinterpret_cast<unsigned int *>(beNDMWLoadCtrl2Info_meta)[0x24/4]&4)) beNDMWLoadCtrl2Info_arkRegister();
 return beNDMWLoadCtrl2Info_meta;
}
}
#pragma pop
