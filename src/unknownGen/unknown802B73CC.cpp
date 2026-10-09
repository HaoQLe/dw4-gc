#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_802B7774();
extern void *lbl_805346A8;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802B73CC(void *object){
 fn_802B7774();
 return fn_8006546C(lbl_805346A8,object);
}
void *fn_802B740C(){
 if(!lbl_805346A8) lbl_805346A8=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805346A8;
}
void *beSystem_getMeta(){
 if(!lbl_805346A8 || !(reinterpret_cast<unsigned int *>(lbl_805346A8)[0x24/4]&4)) fn_802B7774();
 return lbl_805346A8;
}
}
#pragma pop
