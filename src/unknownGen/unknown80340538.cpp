#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80340654();
extern void *lbl_80536620;
}
extern "C" {
void *fn_80340538(){
 if(!lbl_80536620 || !(reinterpret_cast<unsigned int *>(lbl_80536620)[0x24/4]&4)) fn_80340654();
 return lbl_80536620;
}
}
#pragma pop
