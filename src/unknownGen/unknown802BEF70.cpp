#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802BF180();
extern void *lbl_80534960;
}
extern "C" {
void *fn_802BEF70(void *object){
 fn_802BF180();
 return fn_8006546C(lbl_80534960,object);
}
void *fn_802BEFB0(){
 if(!lbl_80534960 || !(reinterpret_cast<unsigned int *>(lbl_80534960)[0x24/4]&4)) fn_802BF180();
 return lbl_80534960;
}
}
#pragma pop
