#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8013BEAC();
extern void *lbl_80563EEC;
}
extern "C" {
void *fn_8013BDA4(){
 if(!lbl_80563EEC || !(reinterpret_cast<unsigned int *>(lbl_80563EEC)[0x24/4]&4)) fn_8013BEAC();
 return lbl_80563EEC;
}
}
#pragma pop
