#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800C72B4();
extern void *lbl_80562B40;
void *fn_800C716C();
}
extern "C" {
void *fn_800C714C(){return fn_800C716C();}
void *fn_800C716C(){
 if(!lbl_80562B40 || !(reinterpret_cast<unsigned int *>(lbl_80562B40)[0x24/4]&4)) fn_800C72B4();
 return lbl_80562B40;
}
}
#pragma pop
