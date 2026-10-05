#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802C587C();
extern void *lbl_80534C04;
}
extern "C" {
void *fn_802C579C(void *object){
 fn_802C587C();
 return fn_8006546C(lbl_80534C04,object);
}
void *fn_802C57DC(){
 if(!lbl_80534C04 || !(reinterpret_cast<unsigned int *>(lbl_80534C04)[0x24/4]&4)) fn_802C587C();
 return lbl_80534C04;
}
}
#pragma pop
