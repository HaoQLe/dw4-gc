#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802D957C();
extern void *lbl_80535344;
}
extern "C" {
void *fn_802D94BC(){
 if(!lbl_80535344 || !(reinterpret_cast<unsigned int *>(lbl_80535344)[0x24/4]&4)) fn_802D957C();
 return lbl_80535344;
}
}
#pragma pop
