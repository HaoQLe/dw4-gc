#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80341808();
extern void *lbl_805366D8;
}
extern "C" {
void *fn_803416AC(void *object){
 fn_80341808();
 return fn_8006546C(lbl_805366D8,object);
}
void *fn_803416EC(){
 if(!lbl_805366D8 || !(reinterpret_cast<unsigned int *>(lbl_805366D8)[0x24/4]&4)) fn_80341808();
 return lbl_805366D8;
}
}
#pragma pop
