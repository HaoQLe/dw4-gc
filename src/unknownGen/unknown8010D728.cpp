#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8010D91C();
extern void *lbl_805635AC;
}
extern "C" {
void *fn_8010D728(){
 if(!lbl_805635AC || !(reinterpret_cast<unsigned int *>(lbl_805635AC)[0x24/4]&4)) fn_8010D91C();
 return lbl_805635AC;
}
}
#pragma pop
