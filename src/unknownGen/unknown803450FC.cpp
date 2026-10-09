#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80345210();
extern void *lbl_80536834;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_803450FC(){
 if(!lbl_80536834) lbl_80536834=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80536834;
}
void *beNDMWAfsSetupDataList_getMeta(){
 if(!lbl_80536834 || !(reinterpret_cast<unsigned int *>(lbl_80536834)[0x24/4]&4)) fn_80345210();
 return lbl_80536834;
}
}
#pragma pop
