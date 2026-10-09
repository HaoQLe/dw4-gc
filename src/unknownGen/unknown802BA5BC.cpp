#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_802BA76C();
extern void *lbl_805347D0;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802BA5BC(void *object){
 fn_802BA76C();
 return fn_8006546C(lbl_805347D0,object);
}
void *fn_802BA5FC(){
 if(!lbl_805347D0) lbl_805347D0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805347D0;
}
void *beSelectCtrlInfoWork_getMeta(){
 if(!lbl_805347D0 || !(reinterpret_cast<unsigned int *>(lbl_805347D0)[0x24/4]&4)) fn_802BA76C();
 return lbl_805347D0;
}
}
#pragma pop
