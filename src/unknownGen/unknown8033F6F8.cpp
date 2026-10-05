#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_8033F7CC();
extern void *lbl_805365AC;
}
extern "C" {
void *fn_8033F6F8(void *object){
 fn_8033F7CC();
 return fn_8006546C(lbl_805365AC,object);
}
void *fn_8033F738(){
 if(!lbl_805365AC || !(reinterpret_cast<unsigned int *>(lbl_805365AC)[0x24/4]&4)) fn_8033F7CC();
 return lbl_805365AC;
}
}
#pragma pop
