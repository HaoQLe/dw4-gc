#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80333760();
extern void *lbl_80535F70;
}
extern "C" {
void *fn_803333F0(void *object){
 fn_80333760();
 return fn_8006546C(lbl_80535F70,object);
}
void *fn_80333430(){
 if(!lbl_80535F70 || !(reinterpret_cast<unsigned int *>(lbl_80535F70)[0x24/4]&4)) fn_80333760();
 return lbl_80535F70;
}
}
#pragma pop
