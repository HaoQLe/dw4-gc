#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802DC658();
extern void *lbl_80535448;
}
extern "C" {
void *fn_802DC4E8(void *object){
 fn_802DC658();
 return fn_8006546C(lbl_80535448,object);
}
void *beDataObjObjectList_getMeta(){
 if(!lbl_80535448 || !(reinterpret_cast<unsigned int *>(lbl_80535448)[0x24/4]&4)) fn_802DC658();
 return lbl_80535448;
}
}
#pragma pop
