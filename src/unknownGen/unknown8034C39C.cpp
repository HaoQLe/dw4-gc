#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80305308(void *,void *,void *);
extern char lbl_80456EAC[];
}
extern "C" {
void fn_8034C39C(int p0,int p1,int p2,int p3,int p4,int p5){
 fn_80305308(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20),(void *)p1,lbl_80456EAC);
}
}
#pragma pop
