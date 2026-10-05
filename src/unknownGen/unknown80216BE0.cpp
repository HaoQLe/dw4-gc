#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80216CFC();
void *fn_802177B4();
extern void *lbl_805659EC;
}
extern "C" {
void *fn_80216BE0(){return fn_802177B4();}
void *fn_80216C00(void *object){
 fn_80216CFC();
 return fn_8006546C(lbl_805659EC,object);
}
void *fn_80216C38(){
 if(!lbl_805659EC || !(reinterpret_cast<unsigned int *>(lbl_805659EC)[0x24/4]&4)) fn_80216CFC();
 return lbl_805659EC;
}
}
#pragma pop
