#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_800D5C58();
extern void *lbl_805630C4;
}
extern "C" {
void *fn_800D5B44(void *object){
 fn_800D5C58();
 return fn_8006546C(lbl_805630C4,object);
}
void *fn_800D5B7C(){
 if(!lbl_805630C4 || !(reinterpret_cast<unsigned int *>(lbl_805630C4)[0x24/4]&4)) fn_800D5C58();
 return lbl_805630C4;
}
}
#pragma pop
