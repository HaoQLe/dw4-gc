#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802C78A0();
extern void *lbl_80534D68;
}
extern "C" {
void *fn_802C7730(void *object){
 fn_802C78A0();
 return fn_8006546C(lbl_80534D68,object);
}
void *fn_802C7770(){
 if(!lbl_80534D68 || !(reinterpret_cast<unsigned int *>(lbl_80534D68)[0x24/4]&4)) fn_802C78A0();
 return lbl_80534D68;
}
}
#pragma pop
