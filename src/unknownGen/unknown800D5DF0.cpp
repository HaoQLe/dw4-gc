#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_800D5F94();
extern void *lbl_805630F0;
}
extern "C" {
void *fn_800D5DF0(void *object){
 fn_800D5F94();
 return fn_8006546C(lbl_805630F0,object);
}
void *fn_800D5E28(){
 if(!lbl_805630F0 || !(reinterpret_cast<unsigned int *>(lbl_805630F0)[0x24/4]&4)) fn_800D5F94();
 return lbl_805630F0;
}
}
#pragma pop
