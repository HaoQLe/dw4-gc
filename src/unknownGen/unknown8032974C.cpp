#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_8032990C();
extern void *lbl_80535D7C;
}
extern "C" {
void *fn_8032974C(void *object){
 fn_8032990C();
 return fn_8006546C(lbl_80535D7C,object);
}
void *fn_8032978C(){
 if(!lbl_80535D7C || !(reinterpret_cast<unsigned int *>(lbl_80535D7C)[0x24/4]&4)) fn_8032990C();
 return lbl_80535D7C;
}
}
#pragma pop
