#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802C3994();
extern void *lbl_80534B78;
}
extern "C" {
void *fn_802C38C0(void *object){
 fn_802C3994();
 return fn_8006546C(lbl_80534B78,object);
}
void *fn_802C3900(){
 if(!lbl_80534B78 || !(reinterpret_cast<unsigned int *>(lbl_80534B78)[0x24/4]&4)) fn_802C3994();
 return lbl_80534B78;
}
}
#pragma pop
