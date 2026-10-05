#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80218BC8();
extern void *lbl_805621F4;
extern void *lbl_80565AE4;
}
extern "C" {
void *fn_80218A90(void *object){
 fn_80218BC8();
 return fn_8006546C(lbl_80565AE4,object);
}
void *fn_80218AC8(){
 if(!lbl_80565AE4) lbl_80565AE4=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80565AE4;
}
void *fn_80218B04(){
 if(!lbl_80565AE4 || !(reinterpret_cast<unsigned int *>(lbl_80565AE4)[0x24/4]&4)) fn_80218BC8();
 return lbl_80565AE4;
}
}
#pragma pop
