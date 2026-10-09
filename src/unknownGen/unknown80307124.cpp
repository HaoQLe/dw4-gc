#include <unknownGen.h>
#include <meta/beMeterCtrl.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80305308(void *,void *,void *);
extern char lbl_804265B8[];
}
extern "C" {
void beMeterCtrl_virtual7C(int p0,int p1,int p2,int p3,int p4,int p5){
 fn_80305308(reinterpret_cast<Meta::beMeterCtrl *>((void *)p0)->_messenger,(void *)p1,lbl_804265B8);
}
}
#pragma pop
