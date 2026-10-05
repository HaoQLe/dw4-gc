#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80326ED4();
extern void *lbl_80535D40;
}
extern "C" {
void *fn_80326BD4(void *object){
 fn_80326ED4();
 return fn_8006546C(lbl_80535D40,object);
}
void *fn_80326C14(){
 if(!lbl_80535D40 || !(reinterpret_cast<unsigned int *>(lbl_80535D40)[0x24/4]&4)) fn_80326ED4();
 return lbl_80535D40;
}
}
#pragma pop
