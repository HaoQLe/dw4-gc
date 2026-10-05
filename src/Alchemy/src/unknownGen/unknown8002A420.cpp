#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8002A53C();
void *fn_8006546C(void *,void *);
extern void *lbl_805617B4;
}
extern "C" {
void *fn_8002A420(void *object){
 fn_8002A53C();
 return fn_8006546C(lbl_805617B4,object);
}
void *fn_8002A458(){
 if(!lbl_805617B4 || !(reinterpret_cast<unsigned int *>(lbl_805617B4)[0x24/4]&4)) fn_8002A53C();
 return lbl_805617B4;
}
}
#pragma pop
