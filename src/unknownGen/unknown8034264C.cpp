#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_8034272C();
extern void *lbl_80536730;
}
extern "C" {
void *fn_8034264C(void *object){
 fn_8034272C();
 return fn_8006546C(lbl_80536730,object);
}
void *fn_8034268C(){
 if(!lbl_80536730 || !(reinterpret_cast<unsigned int *>(lbl_80536730)[0x24/4]&4)) fn_8034272C();
 return lbl_80536730;
}
}
#pragma pop
