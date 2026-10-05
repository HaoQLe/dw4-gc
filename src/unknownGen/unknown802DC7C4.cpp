#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802DC934();
extern void *lbl_80535450;
}
extern "C" {
void *fn_802DC7C4(void *object){
 fn_802DC934();
 return fn_8006546C(lbl_80535450,object);
}
void *fn_802DC804(){
 if(!lbl_80535450 || !(reinterpret_cast<unsigned int *>(lbl_80535450)[0x24/4]&4)) fn_802DC934();
 return lbl_80535450;
}
}
#pragma pop
