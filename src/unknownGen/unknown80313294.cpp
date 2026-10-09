#include <unknownGen.h>
#include <meta/beSelectCtrl.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80305308(void *,void *,void *);
extern char lbl_80426E68[];
}
extern "C" {
void beSelectCtrl_virtual7C(int p0,int p1,int p2,int p3,int p4,int p5){
 fn_80305308(reinterpret_cast<Meta::beSelectCtrl *>((void *)p0)->_messenger,(void *)p1,lbl_80426E68);
}
}
#pragma pop
