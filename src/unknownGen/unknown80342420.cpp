#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80342500();
extern void *lbl_80536728;
}
extern "C" {
void *fn_80342420(void *object){
 fn_80342500();
 return fn_8006546C(lbl_80536728,object);
}
void *beNDMWItemWaza_getMeta(){
 if(!lbl_80536728 || !(reinterpret_cast<unsigned int *>(lbl_80536728)[0x24/4]&4)) fn_80342500();
 return lbl_80536728;
}
}
#pragma pop
