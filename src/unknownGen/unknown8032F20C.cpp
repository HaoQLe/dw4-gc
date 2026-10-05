#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_8032F498();
extern void *lbl_80535EA0;
}
extern "C" {
void *fn_8032F20C(void *object){
 fn_8032F498();
 return fn_8006546C(lbl_80535EA0,object);
}
void *fn_8032F24C(){
 if(!lbl_80535EA0 || !(reinterpret_cast<unsigned int *>(lbl_80535EA0)[0x24/4]&4)) fn_8032F498();
 return lbl_80535EA0;
}
}
#pragma pop
