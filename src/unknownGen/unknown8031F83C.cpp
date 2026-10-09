#include <unknownGen.h>
#include <meta/beDBManager.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8028A400(void *,void *);
void fn_80305308(void *,void *,void *);
extern char lbl_80452CC8[];
}
extern "C" {
void beDBManager_virtual7C(int p0,int p1,int p2,int p3,int p4,int p5){
 fn_80305308(reinterpret_cast<Meta::beDBManager *>((void *)p0)->_messenger,(void *)p1,lbl_80452CC8);
}
void beDBManager_virtual84(int p0){
 fn_8028A400(reinterpret_cast<Meta::beDBManager *>((void *)p0)->_insight,(void *)p0);
}
}
#pragma pop
