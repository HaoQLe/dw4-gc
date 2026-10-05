#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802D2C1C();
extern void *lbl_8053513C;
}
extern "C" {
void *fn_802D2A38(){
 if(!lbl_8053513C || !(reinterpret_cast<unsigned int *>(lbl_8053513C)[0x24/4]&4)) fn_802D2C1C();
 return lbl_8053513C;
}
}
#pragma pop
