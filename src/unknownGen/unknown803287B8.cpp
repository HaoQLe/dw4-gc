#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80328B5C();
extern void *lbl_80535D64;
}
extern "C" {
void *fn_803287B8(void *object){
 fn_80328B5C();
 return fn_8006546C(lbl_80535D64,object);
}
void *fn_803287F8(){
 if(!lbl_80535D64 || !(reinterpret_cast<unsigned int *>(lbl_80535D64)[0x24/4]&4)) fn_80328B5C();
 return lbl_80535D64;
}
}
#pragma pop
