#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80334758();
extern void *lbl_80535FCC;
}
extern "C" {
void *fn_803345BC(){
 if(!lbl_80535FCC || !(reinterpret_cast<unsigned int *>(lbl_80535FCC)[0x24/4]&4)) fn_80334758();
 return lbl_80535FCC;
}
}
#pragma pop
