#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_803396A0();
extern void *lbl_805361B8;
}
extern "C" {
void *fn_80339654(){
 if(!lbl_805361B8 || !(reinterpret_cast<unsigned int *>(lbl_805361B8)[0x24/4]&4)) fn_803396A0();
 return lbl_805361B8;
}
}
#pragma pop
