#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_8032A5C4();
extern void *lbl_80535D98;
}
extern "C" {
void *fn_8032A43C(void *object){
 fn_8032A5C4();
 return fn_8006546C(lbl_80535D98,object);
}
void *fn_8032A47C(){
 if(!lbl_80535D98 || !(reinterpret_cast<unsigned int *>(lbl_80535D98)[0x24/4]&4)) fn_8032A5C4();
 return lbl_80535D98;
}
}
#pragma pop
