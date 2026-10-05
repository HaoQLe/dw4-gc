#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_801C3514();
extern void *lbl_805621F4;
extern void *lbl_8056506C;
}
extern "C" {
void *fn_801C3014(void *object){
 fn_801C3514();
 return fn_8006546C(lbl_8056506C,object);
}
void *fn_801C304C(){
 if(!lbl_8056506C) lbl_8056506C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8056506C;
}
void *fn_801C3088(){
 if(!lbl_8056506C || !(reinterpret_cast<unsigned int *>(lbl_8056506C)[0x24/4]&4)) fn_801C3514();
 return lbl_8056506C;
}
}
#pragma pop
