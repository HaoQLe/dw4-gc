#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_802AD500();
extern void *lbl_80534474;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802AD248(void *object){
 fn_802AD500();
 return fn_8006546C(lbl_80534474,object);
}
void *fn_802AD288(){
 if(!lbl_80534474) lbl_80534474=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80534474;
}
void *fn_802AD2DC(){
 if(!lbl_80534474 || !(reinterpret_cast<unsigned int *>(lbl_80534474)[0x24/4]&4)) fn_802AD500();
 return lbl_80534474;
}
}
#pragma pop
