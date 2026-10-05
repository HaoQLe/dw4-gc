#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802DA748();
extern void *lbl_80535398;
}
extern "C" {
void *fn_802DA524(){
 if(!lbl_80535398 || !(reinterpret_cast<unsigned int *>(lbl_80535398)[0x24/4]&4)) fn_802DA748();
 return lbl_80535398;
}
}
#pragma pop
