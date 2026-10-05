#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_803265A4();
extern void *lbl_80535D00;
}
extern "C" {
void *fn_80326468(void *object){
 fn_803265A4();
 return fn_8006546C(lbl_80535D00,object);
}
void *fn_803264A8(){
 if(!lbl_80535D00 || !(reinterpret_cast<unsigned int *>(lbl_80535D00)[0x24/4]&4)) fn_803265A4();
 return lbl_80535D00;
}
}
#pragma pop
