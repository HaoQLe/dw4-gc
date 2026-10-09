#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_8033F63C();
extern void *lbl_805365A8;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_8033F528(){
 if(!lbl_805365A8) lbl_805365A8=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805365A8;
}
void *beNDMWLoadSavePlWorkList_getMeta(){
 if(!lbl_805365A8 || !(reinterpret_cast<unsigned int *>(lbl_805365A8)[0x24/4]&4)) fn_8033F63C();
 return lbl_805365A8;
}
}
#pragma pop
