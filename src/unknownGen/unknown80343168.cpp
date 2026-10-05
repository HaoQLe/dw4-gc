#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80343260();
extern void *lbl_80536750;
}
extern "C" {
void *fn_80343168(void *object){
 fn_80343260();
 return fn_8006546C(lbl_80536750,object);
}
void *fn_803431A8(){
 if(!lbl_80536750 || !(reinterpret_cast<unsigned int *>(lbl_80536750)[0x24/4]&4)) fn_80343260();
 return lbl_80536750;
}
}
#pragma pop
