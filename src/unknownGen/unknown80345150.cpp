#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80345210();
extern void *lbl_80536834;
}
extern "C" {
void *fn_80345150(){
 if(!lbl_80536834 || !(reinterpret_cast<unsigned int *>(lbl_80536834)[0x24/4]&4)) fn_80345210();
 return lbl_80536834;
}
}
#pragma pop
