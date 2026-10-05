#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8032ABFC();
extern void *lbl_80535DBC;
}
extern "C" {
void *fn_8032AA60(){
 if(!lbl_80535DBC || !(reinterpret_cast<unsigned int *>(lbl_80535DBC)[0x24/4]&4)) fn_8032ABFC();
 return lbl_80535DBC;
}
}
#pragma pop
