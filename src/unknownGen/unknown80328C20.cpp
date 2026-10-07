#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80328DA8();
extern void *lbl_80535D68;
}
extern "C" {
void *fn_80328C20(void *object){
 fn_80328DA8();
 return fn_8006546C(lbl_80535D68,object);
}
void *fn_80328C60(){
 if(!lbl_80535D68 || !(reinterpret_cast<unsigned int *>(lbl_80535D68)[0x24/4]&4)) fn_80328DA8();
 return lbl_80535D68;
}
}
#pragma pop
