#include <unknownGen.h>
#include <meta/beCameraCtrl.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80305308(void *,void *,void *);
extern char lbl_80425230[];
}
extern "C" {
void beCameraCtrl_virtual7C(int p0,int p1,int p2,int p3,int p4,int p5){
 fn_80305308(reinterpret_cast<Meta::beCameraCtrl *>((void *)p0)->_messenger,(void *)p1,lbl_80425230);
}
}
#pragma pop
