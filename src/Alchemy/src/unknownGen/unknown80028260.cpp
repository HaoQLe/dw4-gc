#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800283B4();
void *fn_8006546C(void *,void *);
extern void *lbl_805616CC;
}
extern "C" {
void *fn_80028260(void *object){
 fn_800283B4();
 return fn_8006546C(lbl_805616CC,object);
}
void *fn_80028298(){
 if(!lbl_805616CC || !(reinterpret_cast<unsigned int *>(lbl_805616CC)[0x24/4]&4)) fn_800283B4();
 return lbl_805616CC;
}
}
#pragma pop
