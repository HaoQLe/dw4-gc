#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_801C2D84();
extern void *lbl_80565030;
}
extern "C" {
void *fn_801C2BF8(void *object){
 fn_801C2D84();
 return fn_8006546C(lbl_80565030,object);
}
void *fn_801C2C30(){
 if(!lbl_80565030 || !(reinterpret_cast<unsigned int *>(lbl_80565030)[0x24/4]&4)) fn_801C2D84();
 return lbl_80565030;
}
}
#pragma pop
