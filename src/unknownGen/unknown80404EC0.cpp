#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80404FE4();
extern void *lbl_8055C848;
}
extern "C" {
void *fn_80404EC0(void *object){
 fn_80404FE4();
 return fn_8006546C(lbl_8055C848,object);
}
void *fn_80404F00(){
 if(!lbl_8055C848 || !(reinterpret_cast<unsigned int *>(lbl_8055C848)[0x24/4]&4)) fn_80404FE4();
 return lbl_8055C848;
}
}
#pragma pop
