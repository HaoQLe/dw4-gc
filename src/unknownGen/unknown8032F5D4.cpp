#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_8032F910();
extern void *lbl_80535EA8;
}
extern "C" {
void *fn_8032F5D4(void *object){
 fn_8032F910();
 return fn_8006546C(lbl_80535EA8,object);
}
void *fn_8032F614(){
 if(!lbl_80535EA8 || !(reinterpret_cast<unsigned int *>(lbl_80535EA8)[0x24/4]&4)) fn_8032F910();
 return lbl_80535EA8;
}
}
#pragma pop
