#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_8033CC48();
extern void *lbl_80536340;
}
extern "C" {
void *fn_8033CB0C(void *object){
 fn_8033CC48();
 return fn_8006546C(lbl_80536340,object);
}
void *fn_8033CB4C(){
 if(!lbl_80536340 || !(reinterpret_cast<unsigned int *>(lbl_80536340)[0x24/4]&4)) fn_8033CC48();
 return lbl_80536340;
}
}
#pragma pop
