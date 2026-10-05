#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802C5650();
extern void *lbl_80534BF8;
}
extern "C" {
void *fn_802C552C(void *object){
 fn_802C5650();
 return fn_8006546C(lbl_80534BF8,object);
}
void *fn_802C556C(){
 if(!lbl_80534BF8 || !(reinterpret_cast<unsigned int *>(lbl_80534BF8)[0x24/4]&4)) fn_802C5650();
 return lbl_80534BF8;
}
}
#pragma pop
