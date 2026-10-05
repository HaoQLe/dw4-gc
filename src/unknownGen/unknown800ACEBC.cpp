#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_800ACFEC();
extern void *lbl_8056247C;
}
extern "C" {
void *fn_800ACEBC(void *object){
 fn_800ACFEC();
 return fn_8006546C(lbl_8056247C,object);
}
void *fn_800ACEF4(){
 if(!lbl_8056247C || !(reinterpret_cast<unsigned int *>(lbl_8056247C)[0x24/4]&4)) fn_800ACFEC();
 return lbl_8056247C;
}
}
#pragma pop
