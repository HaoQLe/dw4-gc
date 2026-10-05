#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8013C61C();
extern void *lbl_80563F04;
}
extern "C" {
void *fn_8013C514(){
 if(!lbl_80563F04 || !(reinterpret_cast<unsigned int *>(lbl_80563F04)[0x24/4]&4)) fn_8013C61C();
 return lbl_80563F04;
}
}
#pragma pop
