#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_8033DCF4();
extern void *lbl_8053645C;
}
extern "C" {
void *fn_8033DC20(void *object){
 fn_8033DCF4();
 return fn_8006546C(lbl_8053645C,object);
}
void *fn_8033DC60(){
 if(!lbl_8053645C || !(reinterpret_cast<unsigned int *>(lbl_8053645C)[0x24/4]&4)) fn_8033DCF4();
 return lbl_8053645C;
}
}
#pragma pop
