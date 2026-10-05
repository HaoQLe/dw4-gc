#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802BF39C();
extern void *lbl_8053496C;
}
extern "C" {
void *fn_802BF350(){
 if(!lbl_8053496C || !(reinterpret_cast<unsigned int *>(lbl_8053496C)[0x24/4]&4)) fn_802BF39C();
 return lbl_8053496C;
}
}
#pragma pop
