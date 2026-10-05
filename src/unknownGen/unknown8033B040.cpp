#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_8033B1B8();
extern void *lbl_8053622C;
}
extern "C" {
void *fn_8033B040(void *object){
 fn_8033B1B8();
 return fn_8006546C(lbl_8053622C,object);
}
void *fn_8033B080(){
 if(!lbl_8053622C || !(reinterpret_cast<unsigned int *>(lbl_8053622C)[0x24/4]&4)) fn_8033B1B8();
 return lbl_8053622C;
}
}
#pragma pop
