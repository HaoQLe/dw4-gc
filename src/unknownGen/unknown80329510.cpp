#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80329698();
extern void *lbl_80535D78;
}
extern "C" {
void *fn_80329510(void *object){
 fn_80329698();
 return fn_8006546C(lbl_80535D78,object);
}
void *fn_80329550(){
 if(!lbl_80535D78 || !(reinterpret_cast<unsigned int *>(lbl_80535D78)[0x24/4]&4)) fn_80329698();
 return lbl_80535D78;
}
}
#pragma pop
