#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_800B1890();
extern void *lbl_805621F4;
extern void *lbl_80562658;
}
extern "C" {
void *fn_800B1700(void *object){
 fn_800B1890();
 return fn_8006546C(lbl_80562658,object);
}
void *fn_800B1738(){
 if(!lbl_80562658) lbl_80562658=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562658;
}
void *fn_800B1774(){
 if(!lbl_80562658 || !(reinterpret_cast<unsigned int *>(lbl_80562658)[0x24/4]&4)) fn_800B1890();
 return lbl_80562658;
}
}
#pragma pop
