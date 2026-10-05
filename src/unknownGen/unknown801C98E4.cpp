#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_801C9A94();
extern void *lbl_805621F4;
extern void *lbl_805653BC;
}
extern "C" {
void *fn_801C98E4(void *object){
 fn_801C9A94();
 return fn_8006546C(lbl_805653BC,object);
}
void *fn_801C991C(){
 if(!lbl_805653BC) lbl_805653BC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805653BC;
}
void *fn_801C9958(){
 if(!lbl_805653BC || !(reinterpret_cast<unsigned int *>(lbl_805653BC)[0x24/4]&4)) fn_801C9A94();
 return lbl_805653BC;
}
}
#pragma pop
