#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_8032E3A4();
extern void *lbl_80535E68;
}
extern "C" {
void *fn_8032E050(void *object){
 fn_8032E3A4();
 return fn_8006546C(lbl_80535E68,object);
}
void *fn_8032E090(){
 if(!lbl_80535E68 || !(reinterpret_cast<unsigned int *>(lbl_80535E68)[0x24/4]&4)) fn_8032E3A4();
 return lbl_80535E68;
}
}
#pragma pop
