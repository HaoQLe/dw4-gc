#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80131DDC();
extern void *lbl_80563B2C;
}
extern "C" {
void *fn_80131CA0(void *object){
 fn_80131DDC();
 return fn_8006546C(lbl_80563B2C,object);
}
void *fn_80131CD8(){
 if(!lbl_80563B2C || !(reinterpret_cast<unsigned int *>(lbl_80563B2C)[0x24/4]&4)) fn_80131DDC();
 return lbl_80563B2C;
}
}
#pragma pop
