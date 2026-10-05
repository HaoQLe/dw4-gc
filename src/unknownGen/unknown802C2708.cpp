#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802C27DC();
extern void *lbl_80534AC8;
}
extern "C" {
void *fn_802C2708(void *object){
 fn_802C27DC();
 return fn_8006546C(lbl_80534AC8,object);
}
void *fn_802C2748(){
 if(!lbl_80534AC8 || !(reinterpret_cast<unsigned int *>(lbl_80534AC8)[0x24/4]&4)) fn_802C27DC();
 return lbl_80534AC8;
}
}
#pragma pop
