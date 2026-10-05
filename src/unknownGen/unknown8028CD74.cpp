#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_8028CEE0();
extern void *lbl_805660DC;
}
extern "C" {
void *fn_8028CD74(void *object){
 fn_8028CEE0();
 return fn_8006546C(lbl_805660DC,object);
}
void *fn_8028CDAC(){
 if(!lbl_805660DC || !(reinterpret_cast<unsigned int *>(lbl_805660DC)[0x24/4]&4)) fn_8028CEE0();
 return lbl_805660DC;
}
}
#pragma pop
