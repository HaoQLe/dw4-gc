#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80287188();
extern void *lbl_80515D40;
}
extern "C" {
void *fn_802870A0(){
 if(!lbl_80515D40 || !(reinterpret_cast<unsigned int *>(lbl_80515D40)[0x24/4]&4)) fn_80287188();
 return lbl_80515D40;
}
}
#pragma pop
