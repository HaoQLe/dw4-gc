#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_8010FC50();
extern void *lbl_805621F4;
extern void *lbl_8056366C;
}
extern "C" {
void *fn_8010F9B0(){
 if(!lbl_8056366C) lbl_8056366C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8056366C;
}
void *fn_8010F9EC(){
 if(!lbl_8056366C || !(reinterpret_cast<unsigned int *>(lbl_8056366C)[0x24/4]&4)) fn_8010FC50();
 return lbl_8056366C;
}
}
#pragma pop
