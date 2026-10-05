#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_8032945C();
extern void *lbl_80535D74;
}
extern "C" {
void *fn_803292D4(void *object){
 fn_8032945C();
 return fn_8006546C(lbl_80535D74,object);
}
void *fn_80329314(){
 if(!lbl_80535D74 || !(reinterpret_cast<unsigned int *>(lbl_80535D74)[0x24/4]&4)) fn_8032945C();
 return lbl_80535D74;
}
}
#pragma pop
