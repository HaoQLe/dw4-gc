#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80312C28(void *,void *);
extern void *lbl_80534A6C;
}
extern "C" {
void *fn_80312BEC(){return lbl_80534A6C;}
void fn_80312BFC(int p0,int p1){
 fn_80312C28((void *)p1,(void *)p0);
}
}
#pragma pop
