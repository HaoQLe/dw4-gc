#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80301C0C(void *,void *);
extern void *lbl_80535168;
}
extern "C" {
void *fn_80301BD0(){return lbl_80535168;}
void fn_80301BE0(int p0,int p1){
 fn_80301C0C((void *)p1,(void *)p0);
}
}
#pragma pop
