#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80341E34();
extern void *lbl_805366F8;
}
extern "C" {
void *fn_80341CF8(void *object){
 fn_80341E34();
 return fn_8006546C(lbl_805366F8,object);
}
void *fn_80341D38(){
 if(!lbl_805366F8 || !(reinterpret_cast<unsigned int *>(lbl_805366F8)[0x24/4]&4)) fn_80341E34();
 return lbl_805366F8;
}
}
#pragma pop
