#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_803360A0();
extern void *lbl_80536068;
}
extern "C" {
void *fn_80335F64(void *object){
 fn_803360A0();
 return fn_8006546C(lbl_80536068,object);
}
void *fn_80335FA4(){
 if(!lbl_80536068 || !(reinterpret_cast<unsigned int *>(lbl_80536068)[0x24/4]&4)) fn_803360A0();
 return lbl_80536068;
}
}
#pragma pop
