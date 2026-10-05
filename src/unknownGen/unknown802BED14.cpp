#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802BEEBC();
extern void *lbl_8053495C;
}
extern "C" {
void *fn_802BED14(void *object){
 fn_802BEEBC();
 return fn_8006546C(lbl_8053495C,object);
}
void *fn_802BED54(){
 if(!lbl_8053495C || !(reinterpret_cast<unsigned int *>(lbl_8053495C)[0x24/4]&4)) fn_802BEEBC();
 return lbl_8053495C;
}
}
#pragma pop
