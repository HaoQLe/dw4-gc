#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWPanelWazaInfo_arkRegister();
extern void *beNDMWPanelWazaInfo_meta;
}
extern "C" {
void *beNDMWPanelWazaInfo_getMeta(){
 if(!beNDMWPanelWazaInfo_meta || !(reinterpret_cast<unsigned int *>(beNDMWPanelWazaInfo_meta)[0x24/4]&4)) beNDMWPanelWazaInfo_arkRegister();
 return beNDMWPanelWazaInfo_meta;
}
}
#pragma pop
