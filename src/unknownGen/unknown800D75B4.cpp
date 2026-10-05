#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800D7770();
void *fn_8010307C();
extern void *lbl_805633B8;
}
extern "C" {
void *fn_800D75B4(){return fn_8010307C();}
void *fn_800D75D4(){
 if(!lbl_805633B8 || !(reinterpret_cast<unsigned int *>(lbl_805633B8)[0x24/4]&4)) fn_800D7770();
 return lbl_805633B8;
}
}
#pragma pop
