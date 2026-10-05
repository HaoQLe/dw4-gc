#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80325A88();
extern void *lbl_80535C78;
}
extern "C" {
void *fn_803259C8(){
 if(!lbl_80535C78 || !(reinterpret_cast<unsigned int *>(lbl_80535C78)[0x24/4]&4)) fn_80325A88();
 return lbl_80535C78;
}
}
#pragma pop
