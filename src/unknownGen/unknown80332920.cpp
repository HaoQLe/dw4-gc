#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80332AC8();
extern void *lbl_80535F34;
}
extern "C" {
void *fn_80332920(void *object){
 fn_80332AC8();
 return fn_8006546C(lbl_80535F34,object);
}
void *beNDMWStatusMainSlot_getMeta(){
 if(!lbl_80535F34 || !(reinterpret_cast<unsigned int *>(lbl_80535F34)[0x24/4]&4)) fn_80332AC8();
 return lbl_80535F34;
}
}
#pragma pop
