#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_8040789C();
extern void *lbl_8055CA50;
}
extern "C" {
void *fn_80407720(void *object){
 fn_8040789C();
 return fn_8006546C(lbl_8055CA50,object);
}
void *igCameraMode_getMeta(){
 if(!lbl_8055CA50 || !(reinterpret_cast<unsigned int *>(lbl_8055CA50)[0x24/4]&4)) fn_8040789C();
 return lbl_8055CA50;
}
}
#pragma pop
