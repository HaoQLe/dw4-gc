#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_801C2AAC();
extern void *lbl_80565020;
}
extern "C" {
void *fn_801C28D0(void *object){
 fn_801C2AAC();
 return fn_8006546C(lbl_80565020,object);
}
void *fn_801C2908(){
 if(!lbl_80565020 || !(reinterpret_cast<unsigned int *>(lbl_80565020)[0x24/4]&4)) fn_801C2AAC();
 return lbl_80565020;
}
}
#pragma pop
