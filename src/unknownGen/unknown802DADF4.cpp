#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802DAF0C();
extern void *lbl_805353DC;
}
extern "C" {
void *fn_802DADF4(void *object){
 fn_802DAF0C();
 return fn_8006546C(lbl_805353DC,object);
}
void *fn_802DAE34(){
 if(!lbl_805353DC || !(reinterpret_cast<unsigned int *>(lbl_805353DC)[0x24/4]&4)) fn_802DAF0C();
 return lbl_805353DC;
}
}
#pragma pop
