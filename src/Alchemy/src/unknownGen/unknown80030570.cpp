#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800306DC();
extern void *lbl_80561B70;
}
extern "C" {
void *fn_80030570(){
 if(!lbl_80561B70 || !(reinterpret_cast<unsigned int *>(lbl_80561B70)[0x24/4]&4)) fn_800306DC();
 return lbl_80561B70;
}
}
#pragma pop
