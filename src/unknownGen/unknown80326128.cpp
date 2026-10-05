#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80326264();
extern void *lbl_80535CD0;
}
extern "C" {
void *fn_80326128(void *object){
 fn_80326264();
 return fn_8006546C(lbl_80535CD0,object);
}
void *fn_80326168(){
 if(!lbl_80535CD0 || !(reinterpret_cast<unsigned int *>(lbl_80535CD0)[0x24/4]&4)) fn_80326264();
 return lbl_80535CD0;
}
}
#pragma pop
