#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_8033FC54();
extern void *lbl_805365EC;
}
extern "C" {
void *fn_8033FB30(void *object){
 fn_8033FC54();
 return fn_8006546C(lbl_805365EC,object);
}
void *fn_8033FB70(){
 if(!lbl_805365EC || !(reinterpret_cast<unsigned int *>(lbl_805365EC)[0x24/4]&4)) fn_8033FC54();
 return lbl_805365EC;
}
}
#pragma pop
