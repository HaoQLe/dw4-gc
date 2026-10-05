#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_803282B8();
extern void *lbl_80535D58;
}
extern "C" {
void *fn_8032802C(void *object){
 fn_803282B8();
 return fn_8006546C(lbl_80535D58,object);
}
void *fn_8032806C(){
 if(!lbl_80535D58 || !(reinterpret_cast<unsigned int *>(lbl_80535D58)[0x24/4]&4)) fn_803282B8();
 return lbl_80535D58;
}
}
#pragma pop
