#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80330F40();
extern void *lbl_80535EE8;
}
extern "C" {
void *fn_80330C20(void *object){
 fn_80330F40();
 return fn_8006546C(lbl_80535EE8,object);
}
void *beNDMWStatusCtrlSendBit_getMeta(){
 if(!lbl_80535EE8 || !(reinterpret_cast<unsigned int *>(lbl_80535EE8)[0x24/4]&4)) fn_80330F40();
 return lbl_80535EE8;
}
}
#pragma pop
