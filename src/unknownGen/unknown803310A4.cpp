#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_803313C4();
extern void *lbl_80535EFC;
}
extern "C" {
void *fn_803310A4(void *object){
 fn_803313C4();
 return fn_8006546C(lbl_80535EFC,object);
}
void *beNDMWStatusCtrlBit_getMeta(){
 if(!lbl_80535EFC || !(reinterpret_cast<unsigned int *>(lbl_80535EFC)[0x24/4]&4)) fn_803313C4();
 return lbl_80535EFC;
}
}
#pragma pop
