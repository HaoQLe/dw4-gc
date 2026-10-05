#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_803422BC();
extern void *lbl_80536718;
}
extern "C" {
void *fn_80342118(){
 if(!lbl_80536718 || !(reinterpret_cast<unsigned int *>(lbl_80536718)[0x24/4]&4)) fn_803422BC();
 return lbl_80536718;
}
}
#pragma pop
