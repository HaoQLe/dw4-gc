#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8002C8F0();
void *fn_8006546C(void *,void *);
extern void *lbl_80561914;
}
extern "C" {
void *fn_8002C7D4(void *object){
 fn_8002C8F0();
 return fn_8006546C(lbl_80561914,object);
}
void *fn_8002C80C(){
 if(!lbl_80561914 || !(reinterpret_cast<unsigned int *>(lbl_80561914)[0x24/4]&4)) fn_8002C8F0();
 return lbl_80561914;
}
}
#pragma pop
