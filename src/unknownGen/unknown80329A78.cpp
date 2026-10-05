#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80329C00();
extern void *lbl_80535D84;
}
extern "C" {
void *fn_80329A78(void *object){
 fn_80329C00();
 return fn_8006546C(lbl_80535D84,object);
}
void *fn_80329AB8(){
 if(!lbl_80535D84 || !(reinterpret_cast<unsigned int *>(lbl_80535D84)[0x24/4]&4)) fn_80329C00();
 return lbl_80535D84;
}
}
#pragma pop
