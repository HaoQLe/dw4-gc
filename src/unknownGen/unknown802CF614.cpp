#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802CF8E8();
extern void *lbl_8053503C;
}
extern "C" {
void *fn_802CF614(){
 if(!lbl_8053503C || !(reinterpret_cast<unsigned int *>(lbl_8053503C)[0x24/4]&4)) fn_802CF8E8();
 return lbl_8053503C;
}
}
#pragma pop
