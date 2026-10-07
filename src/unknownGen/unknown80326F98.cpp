#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80327224();
extern void *lbl_80535D44;
}
extern "C" {
void *fn_80326F98(void *object){
 fn_80327224();
 return fn_8006546C(lbl_80535D44,object);
}
void *fn_80326FD8(){
 if(!lbl_80535D44 || !(reinterpret_cast<unsigned int *>(lbl_80535D44)[0x24/4]&4)) fn_80327224();
 return lbl_80535D44;
}
}
#pragma pop
