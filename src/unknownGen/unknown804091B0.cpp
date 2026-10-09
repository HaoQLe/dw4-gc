#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_8040956C();
extern void *lbl_8055CB40;
}
extern "C" {
void *fn_804091B0(void *object){
 fn_8040956C();
 return fn_8006546C(lbl_8055CB40,object);
}
void *igActorManager_getMeta(){
 if(!lbl_8055CB40 || !(reinterpret_cast<unsigned int *>(lbl_8055CB40)[0x24/4]&4)) fn_8040956C();
 return lbl_8055CB40;
}
}
#pragma pop
