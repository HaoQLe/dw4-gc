#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_803332B4();
extern void *lbl_80535F68;
}
extern "C" {
void *fn_80333028(void *object){
 fn_803332B4();
 return fn_8006546C(lbl_80535F68,object);
}
void *fn_80333068(){
 if(!lbl_80535F68 || !(reinterpret_cast<unsigned int *>(lbl_80535F68)[0x24/4]&4)) fn_803332B4();
 return lbl_80535F68;
}
}
#pragma pop
