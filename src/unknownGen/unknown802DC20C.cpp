#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802DC37C();
extern void *lbl_80535440;
}
extern "C" {
void *fn_802DC20C(void *object){
 fn_802DC37C();
 return fn_8006546C(lbl_80535440,object);
}
void *fn_802DC24C(){
 if(!lbl_80535440 || !(reinterpret_cast<unsigned int *>(lbl_80535440)[0x24/4]&4)) fn_802DC37C();
 return lbl_80535440;
}
}
#pragma pop
