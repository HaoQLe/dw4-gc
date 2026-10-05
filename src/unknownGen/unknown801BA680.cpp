#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_801BA980();
extern void *lbl_805621F4;
extern void *lbl_80564D48;
}
extern "C" {
void *fn_801BA680(void *object){
 fn_801BA980();
 return fn_8006546C(lbl_80564D48,object);
}
void *fn_801BA6B8(){
 if(!lbl_80564D48) lbl_80564D48=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564D48;
}
void *fn_801BA6F4(){
 if(!lbl_80564D48 || !(reinterpret_cast<unsigned int *>(lbl_80564D48)[0x24/4]&4)) fn_801BA980();
 return lbl_80564D48;
}
}
#pragma pop
