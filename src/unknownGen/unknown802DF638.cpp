#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802DF754();
extern void *lbl_8053555C;
}
extern "C" {
void *fn_802DF638(){
 if(!lbl_8053555C || !(reinterpret_cast<unsigned int *>(lbl_8053555C)[0x24/4]&4)) fn_802DF754();
 return lbl_8053555C;
}
}
#pragma pop
