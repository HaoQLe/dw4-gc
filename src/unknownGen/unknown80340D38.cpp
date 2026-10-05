#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80340E34();
extern void *lbl_8053666C;
}
extern "C" {
void *fn_80340D38(){
 if(!lbl_8053666C || !(reinterpret_cast<unsigned int *>(lbl_8053666C)[0x24/4]&4)) fn_80340E34();
 return lbl_8053666C;
}
}
#pragma pop
