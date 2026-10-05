#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802185B8();
extern void *lbl_80565A78;
}
extern "C" {
void *fn_8021849C(void *object){
 fn_802185B8();
 return fn_8006546C(lbl_80565A78,object);
}
void *fn_802184D4(){
 if(!lbl_80565A78 || !(reinterpret_cast<unsigned int *>(lbl_80565A78)[0x24/4]&4)) fn_802185B8();
 return lbl_80565A78;
}
}
#pragma pop
