#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80327564();
extern void *lbl_80535D48;
}
extern "C" {
void *fn_803272D8(void *object){
 fn_80327564();
 return fn_8006546C(lbl_80535D48,object);
}
void *fn_80327318(){
 if(!lbl_80535D48 || !(reinterpret_cast<unsigned int *>(lbl_80535D48)[0x24/4]&4)) fn_80327564();
 return lbl_80535D48;
}
}
#pragma pop
