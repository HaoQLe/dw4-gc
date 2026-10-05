#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800CBDB8();
void *fn_800CC108();
extern void *lbl_80562C24;
}
extern "C" {
void *fn_800CBC7C(){return fn_800CC108();}
void *fn_800CBC9C(){
 if(!lbl_80562C24 || !(reinterpret_cast<unsigned int *>(lbl_80562C24)[0x24/4]&4)) fn_800CBDB8();
 return lbl_80562C24;
}
}
#pragma pop
