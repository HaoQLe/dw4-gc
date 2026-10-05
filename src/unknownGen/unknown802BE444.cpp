#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802BE68C();
extern void *lbl_8053493C;
}
extern "C" {
void *fn_802BE444(void *object){
 fn_802BE68C();
 return fn_8006546C(lbl_8053493C,object);
}
void *fn_802BE484(){
 if(!lbl_8053493C || !(reinterpret_cast<unsigned int *>(lbl_8053493C)[0x24/4]&4)) fn_802BE68C();
 return lbl_8053493C;
}
}
#pragma pop
