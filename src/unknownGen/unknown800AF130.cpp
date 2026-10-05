#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_800AF2F4();
extern void *lbl_805621F4;
extern void *lbl_80562548;
}
extern "C" {
void *fn_800AF130(void *object){
 fn_800AF2F4();
 return fn_8006546C(lbl_80562548,object);
}
void *fn_800AF168(){
 if(!lbl_80562548) lbl_80562548=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562548;
}
void *fn_800AF1A4(){
 if(!lbl_80562548 || !(reinterpret_cast<unsigned int *>(lbl_80562548)[0x24/4]&4)) fn_800AF2F4();
 return lbl_80562548;
}
}
#pragma pop
