#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80334508();
extern void *lbl_80535FC8;
}
extern "C" {
void *fn_80334420(){
 if(!lbl_80535FC8 || !(reinterpret_cast<unsigned int *>(lbl_80535FC8)[0x24/4]&4)) fn_80334508();
 return lbl_80535FC8;
}
}
#pragma pop
