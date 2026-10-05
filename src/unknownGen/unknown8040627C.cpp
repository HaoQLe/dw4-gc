#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8040651C();
extern void *lbl_8055C974;
}
extern "C" {
void *fn_8040627C(){
 if(!lbl_8055C974 || !(reinterpret_cast<unsigned int *>(lbl_8055C974)[0x24/4]&4)) fn_8040651C();
 return lbl_8055C974;
}
}
#pragma pop
