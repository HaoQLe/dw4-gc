#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80142608();
extern void *lbl_8056407C;
}
extern "C" {
void *fn_80142464(){
 if(!lbl_8056407C || !(reinterpret_cast<unsigned int *>(lbl_8056407C)[0x24/4]&4)) fn_80142608();
 return lbl_8056407C;
}
}
#pragma pop
