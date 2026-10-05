#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802858DC();
extern void *lbl_80515CB0;
}
extern "C" {
void *fn_802857B8(void *object){
 fn_802858DC();
 return fn_8006546C(lbl_80515CB0,object);
}
void *fn_802857F8(){
 if(!lbl_80515CB0 || !(reinterpret_cast<unsigned int *>(lbl_80515CB0)[0x24/4]&4)) fn_802858DC();
 return lbl_80515CB0;
}
}
#pragma pop
