#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80403A68();
extern void *lbl_8055C778;
}
extern "C" {
void *fn_80403988(void *object){
 fn_80403A68();
 return fn_8006546C(lbl_8055C778,object);
}
void *fn_804039C8(){
 if(!lbl_8055C778 || !(reinterpret_cast<unsigned int *>(lbl_8055C778)[0x24/4]&4)) fn_80403A68();
 return lbl_8055C778;
}
}
#pragma pop
