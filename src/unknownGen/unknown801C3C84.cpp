#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_801C4004();
extern void *lbl_805650BC;
}
extern "C" {
void *fn_801C3C84(void *object){
 fn_801C4004();
 return fn_8006546C(lbl_805650BC,object);
}
void *fn_801C3CBC(){
 if(!lbl_805650BC || !(reinterpret_cast<unsigned int *>(lbl_805650BC)[0x24/4]&4)) fn_801C4004();
 return lbl_805650BC;
}
}
#pragma pop
