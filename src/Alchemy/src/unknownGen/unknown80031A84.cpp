#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80031CD8();
void *fn_8006546C(void *,void *);
extern void *lbl_80561C4C;
}
extern "C" {
void *fn_80031A84(void *object){
 fn_80031CD8();
 return fn_8006546C(lbl_80561C4C,object);
}
void *fn_80031ABC(){
 if(!lbl_80561C4C || !(reinterpret_cast<unsigned int *>(lbl_80561C4C)[0x24/4]&4)) fn_80031CD8();
 return lbl_80561C4C;
}
}
#pragma pop
