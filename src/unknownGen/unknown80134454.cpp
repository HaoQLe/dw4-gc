#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_801345C0();
extern void *lbl_80563C34;
}
extern "C" {
void *fn_80134454(void *object){
 fn_801345C0();
 return fn_8006546C(lbl_80563C34,object);
}
void *fn_8013448C(){
 if(!lbl_80563C34 || !(reinterpret_cast<unsigned int *>(lbl_80563C34)[0x24/4]&4)) fn_801345C0();
 return lbl_80563C34;
}
}
#pragma pop
