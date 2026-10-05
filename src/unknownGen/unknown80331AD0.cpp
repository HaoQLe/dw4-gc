#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80331DF0();
extern void *lbl_80535F20;
}
extern "C" {
void *fn_80331AD0(void *object){
 fn_80331DF0();
 return fn_8006546C(lbl_80535F20,object);
}
void *fn_80331B10(){
 if(!lbl_80535F20 || !(reinterpret_cast<unsigned int *>(lbl_80535F20)[0x24/4]&4)) fn_80331DF0();
 return lbl_80535F20;
}
}
#pragma pop
