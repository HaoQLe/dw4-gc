#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802BFECC();
extern void *lbl_805349D8;
}
extern "C" {
void *fn_802BFE80(){
 if(!lbl_805349D8 || !(reinterpret_cast<unsigned int *>(lbl_805349D8)[0x24/4]&4)) fn_802BFECC();
 return lbl_805349D8;
}
}
#pragma pop
