#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWSaveCtrlInfo_arkRegister();
extern void *beNDMWSaveCtrlInfo_meta;
}
extern "C" {
void *beNDMWSaveCtrlInfo_getMeta(){
 if(!beNDMWSaveCtrlInfo_meta || !(reinterpret_cast<unsigned int *>(beNDMWSaveCtrlInfo_meta)[0x24/4]&4)) beNDMWSaveCtrlInfo_arkRegister();
 return beNDMWSaveCtrlInfo_meta;
}
}
#pragma pop
