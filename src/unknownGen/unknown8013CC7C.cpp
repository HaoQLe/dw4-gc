#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8013CD84();
extern void *lbl_80563F1C;
}
extern "C" {
void *fn_8013CC7C(){
 if(!lbl_80563F1C || !(reinterpret_cast<unsigned int *>(lbl_80563F1C)[0x24/4]&4)) fn_8013CD84();
 return lbl_80563F1C;
}
}
#pragma pop
