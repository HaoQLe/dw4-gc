#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80328FE4();
extern void *lbl_80535D6C;
}
extern "C" {
void *fn_80328E5C(void *object){
 fn_80328FE4();
 return fn_8006546C(lbl_80535D6C,object);
}
void *fn_80328E9C(){
 if(!lbl_80535D6C || !(reinterpret_cast<unsigned int *>(lbl_80535D6C)[0x24/4]&4)) fn_80328FE4();
 return lbl_80535D6C;
}
}
#pragma pop
