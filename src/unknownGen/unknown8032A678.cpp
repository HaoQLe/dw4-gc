#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_8032A800();
extern void *lbl_80535D9C;
}
extern "C" {
void *fn_8032A678(void *object){
 fn_8032A800();
 return fn_8006546C(lbl_80535D9C,object);
}
void *fn_8032A6B8(){
 if(!lbl_80535D9C || !(reinterpret_cast<unsigned int *>(lbl_80535D9C)[0x24/4]&4)) fn_8032A800();
 return lbl_80535D9C;
}
}
#pragma pop
