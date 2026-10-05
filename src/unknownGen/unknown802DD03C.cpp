#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802DD164();
extern void *lbl_80535468;
}
extern "C" {
void *fn_802DD03C(void *object){
 fn_802DD164();
 return fn_8006546C(lbl_80535468,object);
}
void *fn_802DD07C(){
 if(!lbl_80535468 || !(reinterpret_cast<unsigned int *>(lbl_80535468)[0x24/4]&4)) fn_802DD164();
 return lbl_80535468;
}
}
#pragma pop
