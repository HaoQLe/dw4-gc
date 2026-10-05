#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_803278A4();
extern void *lbl_80535D4C;
}
extern "C" {
void *fn_80327618(void *object){
 fn_803278A4();
 return fn_8006546C(lbl_80535D4C,object);
}
void *fn_80327658(){
 if(!lbl_80535D4C || !(reinterpret_cast<unsigned int *>(lbl_80535D4C)[0x24/4]&4)) fn_803278A4();
 return lbl_80535D4C;
}
}
#pragma pop
