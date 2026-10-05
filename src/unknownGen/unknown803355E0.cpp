#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_8033571C();
extern void *lbl_8053600C;
}
extern "C" {
void *fn_803355E0(void *object){
 fn_8033571C();
 return fn_8006546C(lbl_8053600C,object);
}
void *fn_80335620(){
 if(!lbl_8053600C || !(reinterpret_cast<unsigned int *>(lbl_8053600C)[0x24/4]&4)) fn_8033571C();
 return lbl_8053600C;
}
}
#pragma pop
