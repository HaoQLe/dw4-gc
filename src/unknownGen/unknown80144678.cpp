#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80144780();
extern void *lbl_80564118;
}
extern "C" {
void *fn_80144678(void *object){
 fn_80144780();
 return fn_8006546C(lbl_80564118,object);
}
void *fn_801446B0(){
 if(!lbl_80564118 || !(reinterpret_cast<unsigned int *>(lbl_80564118)[0x24/4]&4)) fn_80144780();
 return lbl_80564118;
}
}
#pragma pop
