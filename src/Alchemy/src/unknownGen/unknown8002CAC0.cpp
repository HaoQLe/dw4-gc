#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8002CBBC();
void *fn_8006546C(void *,void *);
extern void *lbl_80561934;
}
extern "C" {
void *fn_8002CAC0(void *object){
 fn_8002CBBC();
 return fn_8006546C(lbl_80561934,object);
}
void *fn_8002CAF8(){
 if(!lbl_80561934 || !(reinterpret_cast<unsigned int *>(lbl_80561934)[0x24/4]&4)) fn_8002CBBC();
 return lbl_80561934;
}
}
#pragma pop
