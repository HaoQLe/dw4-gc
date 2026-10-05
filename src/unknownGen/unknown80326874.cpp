#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80326A58();
extern void *lbl_80535D2C;
}
extern "C" {
void *fn_80326874(){
 if(!lbl_80535D2C || !(reinterpret_cast<unsigned int *>(lbl_80535D2C)[0x24/4]&4)) fn_80326A58();
 return lbl_80535D2C;
}
}
#pragma pop
