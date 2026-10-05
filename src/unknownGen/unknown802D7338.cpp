#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802D73F8();
extern void *lbl_80535290;
}
extern "C" {
void *fn_802D7338(){
 if(!lbl_80535290 || !(reinterpret_cast<unsigned int *>(lbl_80535290)[0x24/4]&4)) fn_802D73F8();
 return lbl_80535290;
}
}
#pragma pop
