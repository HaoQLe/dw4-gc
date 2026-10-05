#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802CBCFC();
extern void *lbl_80534F18;
}
extern "C" {
void *fn_802CBC14(){
 if(!lbl_80534F18 || !(reinterpret_cast<unsigned int *>(lbl_80534F18)[0x24/4]&4)) fn_802CBCFC();
 return lbl_80534F18;
}
}
#pragma pop
