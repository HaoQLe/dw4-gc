#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80407B14();
extern void *lbl_8055CA5C;
}
extern "C" {
void *fn_80407A6C(){
 if(!lbl_8055CA5C || !(reinterpret_cast<unsigned int *>(lbl_8055CA5C)[0x24/4]&4)) fn_80407B14();
 return lbl_8055CA5C;
}
}
#pragma pop
