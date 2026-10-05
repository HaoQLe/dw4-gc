#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80330580();
extern void *lbl_80535EC0;
}
extern "C" {
void *fn_80330184(void *object){
 fn_80330580();
 return fn_8006546C(lbl_80535EC0,object);
}
void *fn_803301C4(){
 if(!lbl_80535EC0 || !(reinterpret_cast<unsigned int *>(lbl_80535EC0)[0x24/4]&4)) fn_80330580();
 return lbl_80535EC0;
}
}
#pragma pop
