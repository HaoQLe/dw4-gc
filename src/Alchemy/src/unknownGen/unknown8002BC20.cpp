#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8002BD8C();
void *fn_8006546C(void *,void *);
extern void *lbl_8056189C;
}
extern "C" {
void *fn_8002BC20(void *object){
 fn_8002BD8C();
 return fn_8006546C(lbl_8056189C,object);
}
void *fn_8002BC58(){
 if(!lbl_8056189C || !(reinterpret_cast<unsigned int *>(lbl_8056189C)[0x24/4]&4)) fn_8002BD8C();
 return lbl_8056189C;
}
}
#pragma pop
