#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802DC150();
extern void *lbl_8053543C;
}
extern "C" {
void *fn_802DC090(){
 if(!lbl_8053543C || !(reinterpret_cast<unsigned int *>(lbl_8053543C)[0x24/4]&4)) fn_802DC150();
 return lbl_8053543C;
}
}
#pragma pop
