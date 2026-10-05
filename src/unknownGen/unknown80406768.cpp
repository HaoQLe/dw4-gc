#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_804068F4();
extern void *lbl_8055C998;
}
extern "C" {
void *fn_80406768(void *object){
 fn_804068F4();
 return fn_8006546C(lbl_8055C998,object);
}
void *fn_804067A8(){
 if(!lbl_8055C998 || !(reinterpret_cast<unsigned int *>(lbl_8055C998)[0x24/4]&4)) fn_804068F4();
 return lbl_8055C998;
}
}
#pragma pop
