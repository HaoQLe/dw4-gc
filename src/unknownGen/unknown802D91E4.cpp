#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802D930C();
extern void *lbl_8053533C;
}
extern "C" {
void *fn_802D91E4(void *object){
 fn_802D930C();
 return fn_8006546C(lbl_8053533C,object);
}
void *fn_802D9224(){
 if(!lbl_8053533C || !(reinterpret_cast<unsigned int *>(lbl_8053533C)[0x24/4]&4)) fn_802D930C();
 return lbl_8053533C;
}
}
#pragma pop
