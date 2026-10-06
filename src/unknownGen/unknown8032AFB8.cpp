#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_8032B2B4();
extern void *lbl_80535DC8;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_8032AFB8(void *object){
 fn_8032B2B4();
 return fn_8006546C(lbl_80535DC8,object);
}
void *fn_8032AFF8(){
 if(!lbl_80535DC8) lbl_80535DC8=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80535DC8;
}
void *fn_8032B04C(){
 if(!lbl_80535DC8 || !(reinterpret_cast<unsigned int *>(lbl_80535DC8)[0x24/4]&4)) fn_8032B2B4();
 return lbl_80535DC8;
}
}
#pragma pop
