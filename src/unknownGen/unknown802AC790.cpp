#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802ACBCC();
extern void *lbl_80534414;
}
extern "C" {
void *fn_802AC790(void *object){
 fn_802ACBCC();
 return fn_8006546C(lbl_80534414,object);
}
void *fn_802AC7D0(){
 if(!lbl_80534414 || !(reinterpret_cast<unsigned int *>(lbl_80534414)[0x24/4]&4)) fn_802ACBCC();
 return lbl_80534414;
}
}
#pragma pop
