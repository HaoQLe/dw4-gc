#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8003B96C();
extern void *lbl_805620CC;
}
extern "C" {
void *fn_8003B898(){
 if(!lbl_805620CC || !(reinterpret_cast<unsigned int *>(lbl_805620CC)[0x24/4]&4)) fn_8003B96C();
 return lbl_805620CC;
}
}
#pragma pop
