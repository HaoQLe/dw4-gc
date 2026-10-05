#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_801BF910();
extern void *lbl_805621F4;
extern void *lbl_80564ED0;
}
extern "C" {
void *fn_801BF6F8(void *object){
 fn_801BF910();
 return fn_8006546C(lbl_80564ED0,object);
}
void *fn_801BF730(){
 if(!lbl_80564ED0) lbl_80564ED0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564ED0;
}
void *fn_801BF76C(){
 if(!lbl_80564ED0 || !(reinterpret_cast<unsigned int *>(lbl_80564ED0)[0x24/4]&4)) fn_801BF910();
 return lbl_80564ED0;
}
}
#pragma pop
