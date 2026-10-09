#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_802CFFC0();
extern void *lbl_80535080;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802CFE10(void *object){
 fn_802CFFC0();
 return fn_8006546C(lbl_80535080,object);
}
void *fn_802CFE50(){
 if(!lbl_80535080) lbl_80535080=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80535080;
}
void *beMatCtrlInfoWork_getMeta(){
 if(!lbl_80535080 || !(reinterpret_cast<unsigned int *>(lbl_80535080)[0x24/4]&4)) fn_802CFFC0();
 return lbl_80535080;
}
}
#pragma pop
