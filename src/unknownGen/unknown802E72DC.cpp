#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802E7438();
extern void *lbl_8053582C;
}
extern "C" {
void *fn_802E72DC(){
 if(!lbl_8053582C || !(reinterpret_cast<unsigned int *>(lbl_8053582C)[0x24/4]&4)) fn_802E7438();
 return lbl_8053582C;
}
}
#pragma pop
