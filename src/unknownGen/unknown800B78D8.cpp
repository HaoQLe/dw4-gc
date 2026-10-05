#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_800B7A1C();
extern void *lbl_805621F4;
extern void *lbl_805628F0;
}
extern "C" {
void *fn_800B78D8(void *object){
 fn_800B7A1C();
 return fn_8006546C(lbl_805628F0,object);
}
void *fn_800B7910(){
 if(!lbl_805628F0) lbl_805628F0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805628F0;
}
void *fn_800B794C(){
 if(!lbl_805628F0 || !(reinterpret_cast<unsigned int *>(lbl_805628F0)[0x24/4]&4)) fn_800B7A1C();
 return lbl_805628F0;
}
}
#pragma pop
