#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80152F74();
extern void *lbl_80564578;
}
extern "C" {
void *fn_80152E20(){
 if(!lbl_80564578 || !(reinterpret_cast<unsigned int *>(lbl_80564578)[0x24/4]&4)) fn_80152F74();
 return lbl_80564578;
}
}
#pragma pop
