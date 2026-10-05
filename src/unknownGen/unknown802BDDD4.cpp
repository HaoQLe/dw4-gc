#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802BDF7C();
extern void *lbl_80534920;
}
extern "C" {
void *fn_802BDDD4(void *object){
 fn_802BDF7C();
 return fn_8006546C(lbl_80534920,object);
}
void *fn_802BDE14(){
 if(!lbl_80534920 || !(reinterpret_cast<unsigned int *>(lbl_80534920)[0x24/4]&4)) fn_802BDF7C();
 return lbl_80534920;
}
}
#pragma pop
