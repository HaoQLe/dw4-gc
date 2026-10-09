#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802B2D78();
extern void *lbl_8053453C;
}
extern "C" {
void *beWeaponInfo_getMeta(){
 if(!lbl_8053453C || !(reinterpret_cast<unsigned int *>(lbl_8053453C)[0x24/4]&4)) fn_802B2D78();
 return lbl_8053453C;
}
}
#pragma pop
