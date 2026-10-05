#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void arkRegister__Q33Gap4Core6igFileFv();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
extern void *lbl_80561B3C;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_8002FFC8(void *object){
 arkRegister__Q33Gap4Core6igFileFv();
 return fn_8006546C(lbl_80561B3C,object);
}
void *fn_80030000(){
 if(!lbl_80561B3C) lbl_80561B3C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80561B3C;
}
void *fn_8003003C(){
 if(!lbl_80561B3C || !(reinterpret_cast<unsigned int *>(lbl_80561B3C)[0x24/4]&4)) arkRegister__Q33Gap4Core6igFileFv();
 return lbl_80561B3C;
}
}
#pragma pop
