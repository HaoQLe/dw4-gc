#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802C4A60();
void *fn_803115F8();
extern void *lbl_80534BCC;
}
extern "C" {
void *fn_802C48A4(){return fn_803115F8();}
void *fn_802C48C4(){
 if(!lbl_80534BCC || !(reinterpret_cast<unsigned int *>(lbl_80534BCC)[0x24/4]&4)) fn_802C4A60();
 return lbl_80534BCC;
}
}
#pragma pop
