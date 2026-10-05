#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_8032A388();
extern void *lbl_80535D94;
}
extern "C" {
void *fn_8032A200(void *object){
 fn_8032A388();
 return fn_8006546C(lbl_80535D94,object);
}
void *fn_8032A240(){
 if(!lbl_80535D94 || !(reinterpret_cast<unsigned int *>(lbl_80535D94)[0x24/4]&4)) fn_8032A388();
 return lbl_80535D94;
}
}
#pragma pop
