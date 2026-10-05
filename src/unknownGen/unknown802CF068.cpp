#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802CF244();
extern void *lbl_80535018;
}
extern "C" {
void *fn_802CF068(void *object){
 fn_802CF244();
 return fn_8006546C(lbl_80535018,object);
}
void *fn_802CF0A8(){
 if(!lbl_80535018 || !(reinterpret_cast<unsigned int *>(lbl_80535018)[0x24/4]&4)) fn_802CF244();
 return lbl_80535018;
}
}
#pragma pop
