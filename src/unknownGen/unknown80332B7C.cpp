#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80332D24();
extern void *lbl_80535F38;
}
extern "C" {
void *fn_80332B7C(void *object){
 fn_80332D24();
 return fn_8006546C(lbl_80535F38,object);
}
void *fn_80332BBC(){
 if(!lbl_80535F38 || !(reinterpret_cast<unsigned int *>(lbl_80535F38)[0x24/4]&4)) fn_80332D24();
 return lbl_80535F38;
}
}
#pragma pop
