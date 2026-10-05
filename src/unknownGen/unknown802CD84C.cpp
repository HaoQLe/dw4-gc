#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802CD9FC();
extern void *lbl_80534F78;
}
extern "C" {
void *fn_802CD84C(){
 if(!lbl_80534F78 || !(reinterpret_cast<unsigned int *>(lbl_80534F78)[0x24/4]&4)) fn_802CD9FC();
 return lbl_80534F78;
}
}
#pragma pop
