#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_800CED80();
void *fn_800D61B4();
extern void *lbl_80562D78;
}
extern "C" {
void *fn_800CEC0C(){return fn_800D61B4();}
void *fn_800CEC2C(void *object){
 fn_800CED80();
 return fn_8006546C(lbl_80562D78,object);
}
void *fn_800CEC64(){
 if(!lbl_80562D78 || !(reinterpret_cast<unsigned int *>(lbl_80562D78)[0x24/4]&4)) fn_800CED80();
 return lbl_80562D78;
}
}
#pragma pop
