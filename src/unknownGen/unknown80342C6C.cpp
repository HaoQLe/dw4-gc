#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80342D4C();
extern void *lbl_80536744;
}
extern "C" {
void *fn_80342C6C(void *object){
 fn_80342D4C();
 return fn_8006546C(lbl_80536744,object);
}
void *fn_80342CAC(){
 if(!lbl_80536744 || !(reinterpret_cast<unsigned int *>(lbl_80536744)[0x24/4]&4)) fn_80342D4C();
 return lbl_80536744;
}
}
#pragma pop
