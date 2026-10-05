#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_801C4994();
extern void *lbl_805621F4;
extern void *lbl_80565118;
}
extern "C" {
void *fn_801C47E4(void *object){
 fn_801C4994();
 return fn_8006546C(lbl_80565118,object);
}
void *fn_801C481C(){
 if(!lbl_80565118) lbl_80565118=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80565118;
}
void *fn_801C4858(){
 if(!lbl_80565118 || !(reinterpret_cast<unsigned int *>(lbl_80565118)[0x24/4]&4)) fn_801C4994();
 return lbl_80565118;
}
}
#pragma pop
