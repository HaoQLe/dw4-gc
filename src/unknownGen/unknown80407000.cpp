#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_804070F4();
extern void *lbl_8055C9DC;
}
extern "C" {
void *fn_80407000(void *object){
 fn_804070F4();
 return fn_8006546C(lbl_8055C9DC,object);
}
void *fn_80407040(){
 if(!lbl_8055C9DC || !(reinterpret_cast<unsigned int *>(lbl_8055C9DC)[0x24/4]&4)) fn_804070F4();
 return lbl_8055C9DC;
}
}
#pragma pop
