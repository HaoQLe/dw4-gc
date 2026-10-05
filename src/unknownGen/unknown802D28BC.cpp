#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802D297C();
extern void *lbl_80535138;
}
extern "C" {
void *fn_802D28BC(){
 if(!lbl_80535138 || !(reinterpret_cast<unsigned int *>(lbl_80535138)[0x24/4]&4)) fn_802D297C();
 return lbl_80535138;
}
}
#pragma pop
