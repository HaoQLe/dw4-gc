#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_8032BC90();
extern void *lbl_80535DF8;
}
extern "C" {
void *fn_8032B954(void *object){
 fn_8032BC90();
 return fn_8006546C(lbl_80535DF8,object);
}
void *fn_8032B994(){
 if(!lbl_80535DF8 || !(reinterpret_cast<unsigned int *>(lbl_80535DF8)[0x24/4]&4)) fn_8032BC90();
 return lbl_80535DF8;
}
}
#pragma pop
