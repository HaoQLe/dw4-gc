#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_803300D0();
extern void *lbl_80535EBC;
}
extern "C" {
void *fn_8032FE44(void *object){
 fn_803300D0();
 return fn_8006546C(lbl_80535EBC,object);
}
void *fn_8032FE84(){
 if(!lbl_80535EBC || !(reinterpret_cast<unsigned int *>(lbl_80535EBC)[0x24/4]&4)) fn_803300D0();
 return lbl_80535EBC;
}
}
#pragma pop
