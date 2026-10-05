#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80344AB0();
extern void *lbl_80536820;
}
extern "C" {
void *fn_80344988(void *object){
 fn_80344AB0();
 return fn_8006546C(lbl_80536820,object);
}
void *fn_803449C8(){
 if(!lbl_80536820 || !(reinterpret_cast<unsigned int *>(lbl_80536820)[0x24/4]&4)) fn_80344AB0();
 return lbl_80536820;
}
}
#pragma pop
