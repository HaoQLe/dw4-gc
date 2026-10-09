#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8028A400(void *,void *);
void fn_80305308(void *,void *,void *);
extern char lbl_80452CC8[];
}
extern "C" {
void beDBManager_virtual7C(int p0,int p1,int p2,int p3,int p4,int p5){
 fn_80305308(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20),(void *)p1,lbl_80452CC8);
}
void beDBManager_virtual84(int p0){
 fn_8028A400(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),(void *)p0);
}
}
#pragma pop
