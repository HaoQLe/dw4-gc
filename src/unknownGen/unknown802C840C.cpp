#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void beModelCtrlMoveObjectList_arkRegister();
extern void *beModelCtrlMoveObjectList_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *beModelCtrlMoveObjectList_metaObject(){
 if(!beModelCtrlMoveObjectList_meta) beModelCtrlMoveObjectList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beModelCtrlMoveObjectList_meta;
}
void *beModelCtrlMoveObjectList_getMeta(){
 if(!beModelCtrlMoveObjectList_meta || !(reinterpret_cast<unsigned int *>(beModelCtrlMoveObjectList_meta)[0x24/4]&4)) beModelCtrlMoveObjectList_arkRegister();
 return beModelCtrlMoveObjectList_meta;
}
}
#pragma pop
