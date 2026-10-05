#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_803321E8();
extern void *lbl_80535F28;
}
extern "C" {
void *fn_80331F5C(void *object){
 fn_803321E8();
 return fn_8006546C(lbl_80535F28,object);
}
void *fn_80331F9C(){
 if(!lbl_80535F28 || !(reinterpret_cast<unsigned int *>(lbl_80535F28)[0x24/4]&4)) fn_803321E8();
 return lbl_80535F28;
}
}
#pragma pop
