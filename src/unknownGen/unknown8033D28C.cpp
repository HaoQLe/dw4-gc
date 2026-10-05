#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_8033D3C8();
extern void *lbl_805363E8;
}
extern "C" {
void *fn_8033D28C(void *object){
 fn_8033D3C8();
 return fn_8006546C(lbl_805363E8,object);
}
void *fn_8033D2CC(){
 if(!lbl_805363E8 || !(reinterpret_cast<unsigned int *>(lbl_805363E8)[0x24/4]&4)) fn_8033D3C8();
 return lbl_805363E8;
}
}
#pragma pop
