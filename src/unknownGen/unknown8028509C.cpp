#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802851F8();
extern void *lbl_80515C94;
}
extern "C" {
void *fn_8028509C(void *object){
 fn_802851F8();
 return fn_8006546C(lbl_80515C94,object);
}
void *fn_802850DC(){
 if(!lbl_80515C94 || !(reinterpret_cast<unsigned int *>(lbl_80515C94)[0x24/4]&4)) fn_802851F8();
 return lbl_80515C94;
}
}
#pragma pop
