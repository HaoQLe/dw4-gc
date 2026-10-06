#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802E0D98();
void *fn_802F4C38();
extern void *lbl_805355CC;
}
extern "C" {
void *fn_802E0C48(){return fn_802F4C38();}
void *fn_802E0C68(){
 if(!lbl_805355CC || !(reinterpret_cast<unsigned int *>(lbl_805355CC)[0x24/4]&4)) fn_802E0D98();
 return lbl_805355CC;
}
}
#pragma pop
