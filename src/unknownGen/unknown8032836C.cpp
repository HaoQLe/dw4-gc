#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_803285F8();
extern void *lbl_80535D5C;
}
extern "C" {
void *fn_8032836C(void *object){
 fn_803285F8();
 return fn_8006546C(lbl_80535D5C,object);
}
void *fn_803283AC(){
 if(!lbl_80535D5C || !(reinterpret_cast<unsigned int *>(lbl_80535D5C)[0x24/4]&4)) fn_803285F8();
 return lbl_80535D5C;
}
}
#pragma pop
