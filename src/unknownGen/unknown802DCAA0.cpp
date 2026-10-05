#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802DCC10();
extern void *lbl_80535458;
}
extern "C" {
void *fn_802DCAA0(void *object){
 fn_802DCC10();
 return fn_8006546C(lbl_80535458,object);
}
void *fn_802DCAE0(){
 if(!lbl_80535458 || !(reinterpret_cast<unsigned int *>(lbl_80535458)[0x24/4]&4)) fn_802DCC10();
 return lbl_80535458;
}
}
#pragma pop
