#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80039A1C();
void *fn_8006546C(void *,void *);
extern void *lbl_80561F24;
}
extern "C" {
void *fn_80039920(void *object){
 fn_80039A1C();
 return fn_8006546C(lbl_80561F24,object);
}
void *fn_80039958(){
 if(!lbl_80561F24 || !(reinterpret_cast<unsigned int *>(lbl_80561F24)[0x24/4]&4)) fn_80039A1C();
 return lbl_80561F24;
}
}
#pragma pop
