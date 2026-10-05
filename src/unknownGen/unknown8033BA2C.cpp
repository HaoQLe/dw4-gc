#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_8033BB68();
extern void *lbl_8053623C;
}
extern "C" {
void *fn_8033BA2C(void *object){
 fn_8033BB68();
 return fn_8006546C(lbl_8053623C,object);
}
void *fn_8033BA6C(){
 if(!lbl_8053623C || !(reinterpret_cast<unsigned int *>(lbl_8053623C)[0x24/4]&4)) fn_8033BB68();
 return lbl_8053623C;
}
}
#pragma pop
