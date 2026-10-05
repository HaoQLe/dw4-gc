#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_8032A14C();
extern void *lbl_80535D90;
}
extern "C" {
void *fn_80329FC4(void *object){
 fn_8032A14C();
 return fn_8006546C(lbl_80535D90,object);
}
void *fn_8032A004(){
 if(!lbl_80535D90 || !(reinterpret_cast<unsigned int *>(lbl_80535D90)[0x24/4]&4)) fn_8032A14C();
 return lbl_80535D90;
}
}
#pragma pop
