#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802E278C();
extern void *lbl_80535660;
}
extern "C" {
void *fn_802E2570(){
 if(!lbl_80535660 || !(reinterpret_cast<unsigned int *>(lbl_80535660)[0x24/4]&4)) fn_802E278C();
 return lbl_80535660;
}
}
#pragma pop
