#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802CC7BC();
extern void *lbl_80534F34;
}
extern "C" {
void *fn_802CC68C(){
 if(!lbl_80534F34 || !(reinterpret_cast<unsigned int *>(lbl_80534F34)[0x24/4]&4)) fn_802CC7BC();
 return lbl_80534F34;
}
}
#pragma pop
