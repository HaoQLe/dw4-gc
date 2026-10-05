#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80135BD0();
extern void *lbl_80563CA0;
}
extern "C" {
void *fn_80135A2C(void *object){
 fn_80135BD0();
 return fn_8006546C(lbl_80563CA0,object);
}
void *fn_80135A64(){
 if(!lbl_80563CA0 || !(reinterpret_cast<unsigned int *>(lbl_80563CA0)[0x24/4]&4)) fn_80135BD0();
 return lbl_80563CA0;
}
}
#pragma pop
